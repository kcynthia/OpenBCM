#
# $Id: cint_logger_tests.pl
# This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
# 
# Copyright 2007-2021 Broadcom Inc. All rights reserved.
#
# File:        cint_logger_tests.pl
# Purpose:     cint_logger_tests preprocessing script
#
#
# Following tokens are understood. Any line which has a token is not output
#
# <hexdump>
# </hexdump>
# <token_offsets>
# <token_sizes>
#

sub USAGE
{
    print STDERR "Usage: cint_logger_tests.pl templ.t > templ.i\n";
    exit;
}

USAGE if (scalar @ARGV != 1);

my $file = shift;

die "$file does not exist\n" unless (-e $file);

open FH, "<$file" or die "Unable to open $file for reading\n";

my $indent = 4;
my $maxwidth = 65;

my $hexdump = 0;
my $offsets = 0;

my $skiplines = 0;

$\ = undef;

my @tokens;

my $len = 0;
my $lw = 0;

while (<FH>) {

    my $newfn = $file;

    $newfn =~ s/\.t$/\.i/g;

    s/$file/$newfn/g;

    s/(File:\s+$newfn)/$1 (Autogenerated)/g;

    s/\<DNE\>/DO NOT EDIT THIS FILE. Your changes will be lost/g;

    if ($skiplines == 0 and /\<SKIPLINES\>/i) {
        $skiplines = 1;
        next;
    }

    if ($skiplines == 1 and /\<\/SKIPLINES\>/i) {
        $skiplines = 0;
        next;
    }

    next if ($skiplines == 1);

    if ($hexdump == 0 and /\<hexdump\>/i) {
        #print "starting hexdump\n";
        $hexdump = 1;
        print " " x $indent;
        $lw = $indent;
        next;
    }

    if ($hexdump == 1 and /\<\/hexdump\>/i) {
        #print "stopping hexdump\n";
        $hexdump = 0;
        $lw = 0;
        print "\n";
        next;

    }

    if (/\<token_offsets\>/i) {

        foreach my $tok (@tokens) {
           print " " x $indent;
           printf("{ %5d, %5d, %5d, CINT_LOGGER_TESTS_TOKEN_%s },\n",
                  $tok->{LINE_OFFSET},
                  $tok->{LINE_LENGTH},
                  $tok->{OFFSET},
                  $tok->{TOK});
        }
        @tokens = ();
        next;
    }

    if (/\<token_sizes\>/i) {

        my %tokens;
        map { $tokens{$_->{TOK}} = 1; } @tokens;

        map {
            printf("#define CINT_LOGGER_TESTS_TOKEN_%s_SZ  %d\n", $_, 2+length $_);
        } sort keys %tokens;

        next;
    }

    if ($hexdump) {
        my $llen = length $_;

        my @chunks = split /@/;

        if (scalar @chunks > 1) {
            # tokens exist

            my $rl = 0; # run length within line
            my $lo = 0; # line offset
            my $hl = 0; # hdr length
            my $istoken = 0;

            foreach my $chunk (@chunks) {
                if (not $istoken) {
                    $hl = length $chunk;
                    $rl += $hl;
                    $istoken = not $istoken;
                } else {
                    my $toklen = 2 + length $chunk;
                    $tok = {
                        OFFSET => $len+$rl,
                        TOK    => uc $chunk,
                        LINE_OFFSET  => $len + $lo,
                        LINE_LENGTH  => $hl + $toklen,
                    };
                    push @tokens, $tok;
                    $rl += $toklen;
                    $lo = $rl;
                    $istoken = not $istoken;
                }
            }

            if ($istoken and defined $tok) {
                $tok->{LINE_LENGTH} += $hl;
            }

            die "run length not equal to line length" if ($rl != $llen);
        }

        $len += $llen;

        my @lhexdump = unpack("C*", $_);
        foreach my $hex (@lhexdump) {
            if ($lw >= $maxwidth or ($lw + 5) > $maxwidth) {
                print "\n";
                print " " x $indent;
                $lw = $indent;
            }
            print sprintf("0x%02x,", $hex);
            $lw += 5;

        }
        next;

    }

    print;

}

close FH;