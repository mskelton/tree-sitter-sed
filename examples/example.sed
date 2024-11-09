# https://www.grymoire.com/Unix/Sed.html#uh-1
s/day/night/
s/one/ONE/

# https://www.grymoire.com/Unix/Sed.html#uh-2
s/\/usr\/local\/bin/\/common\/bin/
s_/usr/local/bin_/common/bin_
s:/usr/local/bin:/common/bin:
s|/usr/local/bin|/common/bin|


# https://www.grymoire.com/Unix/Sed.html#uh-3
s/[a-z]*/(&)/
s/[0-9]*/& &/
s/[0-9][0-9]*/& &/

# https://www.grymoire.com/Unix/Sed.html#uh-4a
s/[0-9]*/& &/

# https://www.grymoire.com/Unix/Sed.html#uh-4
s/\([a-z]*\).*/\1/
s/\([a-z]*\) \([a-z]*\)/\2 \1/
s/\([a-z][a-z]*\) \([a-z][a-z]*\)/\2 \1/
s/([a-z]+) ([a-z]+)/\2 \1/
s/\([a-z]*\) \1/\1/
/\([a-z][a-z]*\) \1/p
/([a-z]+) \1/p
s/^\(.\)\(.\)\(.\)/\3\2\1/

# https://www.grymoire.com/Unix/Sed.html#uh-6
s/[^ ][^ ]*/(&)/g

# https://www.grymoire.com/Unix/Sed.html#uh-8
s/[a-zA-Z]* //2
s/[a-zA-Z]* /DELETED /2g
s/^\([^:]*\):[^:]:/\1::/
s/[^:]*:/:/2
s/./&:/80

# https://www.grymoire.com/Unix/Sed.html#uh-9
s/pattern/&/p

# https://www.grymoire.com/Unix/Sed.html#uh-10
s/^[0-9]*[02468] /&/w even

# https://www.grymoire.com/Unix/Sed.html#uh-10a
/abc/I p

# https://www.grymoire.com/Unix/Sed.html#uh-11
s/a/A/2pw /tmp/file

# https://www.grymoire.com/Unix/Sed.html#uh-15a
/PATTERN/p
/PATTERN/ p

# https://www.grymoire.com/Unix/Sed.html#uh-26
3 s/[0-9][0-9]*//

# https://www.grymoire.com/Unix/Sed.html#uh-27
/^#/ s/[0-9][0-9]*//
\,^#, s/[0-9][0-9]*//
/\/usr\/local\/bin/ s/\/usr\/local/\/common\/all/
\_/usr/local/bin_ s_/usr/local_/common/all_
/^g/s/g/s/g
/^g/ s_g_s_g

# https://www.grymoire.com/Unix/Sed.html#uh-28
1,100 s/A/a/
101,$ s/A/a/

# https://www.grymoire.com/Unix/Sed.html#uh-29
/start/,/stop/ s/#.*//
1,/start/ s/#.*//
/stop/,$ s/#.*//

# https://www.grymoire.com/Unix/Sed.html#uh-30
11,$ d
1,/^$/ d
/^#/ d

# https://www.grymoire.com/Unix/Sed.html#uh-31
p
/^$/ p
1,10 p
/match/ p

# https://www.grymoire.com/Unix/Sed.html#uh-32
/match/ !p

# https://www.grymoire.com/Unix/Sed.html#uh-34
11 q

# https://www.grymoire.com/Unix/Sed.html#uh-35
/begin/,/end/ {
  s/#.*//
  s/[ ^I]*$//
  /^$/ d
  p
}

1,100 {
  /begin/,/end/ {
    s/#.*//
    s/[ ^I]*$//
    /^$/ d
    p
  }
}

/begin/,/end/ !{
  s/#.*//
  s/[ ^I]*$//
  /^$/ d
  p
}

# https://www.grymoire.com/Unix/Sed.html#uh-35a
/begin/,/end/ s/old/new/

/begin/,/end/ {
  s/old/new/
}

/begin/,/end/ {
  /begin/n # skip over the line that has "begin" on it
  s/old/new/
}

/begin/,/end/ {
  /begin/n # skip over the line that has "begin" on it
  /end/ !{
    s/old/new/
  }
}

# https://www.grymoire.com/Unix/Sed.html#uh-36
s/^[0-9]*[02468] /&/w even
/^[0-9]*[02468]/ w even

# https://www.grymoire.com/Unix/Sed.html#uh-37
$r end
/INCLUDE/ r file
/INCLUDE/ {
	r file
	d
}
1 {
	d
	s/.*//
}

# https://www.grymoire.com/Unix/Sed.html#uh-40
/WORD/ a\
Add this line after every line with WORD

# https://www.grymoire.com/Unix/Sed.html#uh-41
/WORD/ i\
Add this line before every line with WORD

# https://www.grymoire.com/Unix/Sed.html#uh-42
/WORD/ c\
Replace the current line with the line

/WORD/ {
  i\
  Add this line before
  a\
  Add this line after
  c\
  Change the line to this one
}

# https://www.grymoire.com/Unix/Sed.html#uh-43
	a\
\	This line starts with a tab

# https://www.grymoire.com/Unix/Sed.html#uh-44
/WORD/ a\
Add this line\
This line\
And this line

# https://www.grymoire.com/Unix/Sed.html#uh-46
/begin/,/end/ c\
***DELETED***

1,$ {
	a\

}

# https://www.grymoire.com/Unix/Sed.html#uh-48
/PATTERN/ =
$=
/begin/,/end/ {
  =
  d
}

# https://www.grymoire.com/Unix/Sed.html#uh-49
y/abcdef/ABCDEF/
/0x[0-9a-zA-Z]*/ y/abcdef/ABCDEF

# https://www.grymoire.com/Unix/Sed.html#uh-51a
/skip3/ {
  N
  N
  s/skip3\n.*\n.*/# 3 lines deleted/
}

/one/ {
  N
  /two/ {
    N
    /three/ {
      N
      s/one\ntwo\nthree/1+2+3/
    }
  }
}

# https://www.grymoire.com/Unix/Sed.html#uh-51b
/ONE/ {
# append a line
  N
# "ONE TWO" on same line
  s/ONE TWO/TWO/
# "ONE
# TWO" on two consecutive lines
  s/ONE\nTWO/TWO/
}

/ONE/ {
# append a line
  N
# if TWO found, delete the first line
  /\n.*TWO/ D
}

# https://www.grymoire.com/Unix/Sed.html#uh-55
/start/ !{
	# put the non-matching line in the hold buffer
	h
}
/end/ {
	# found a line that matches
	# append it to the hold buffer
	H
	# the hold buffer contains 2 lines
	# get the next line
	n
	# and add it to the hold buffer
	H
	# now print it back to the pattern space
	x
	# and print it.
	p
	# add the three hyphens as a marker
	a\
---
}

# https://www.grymoire.com/Unix/Sed.html#uh-57
/start/ !{
	# put the non-matching line in the hold buffer
	h
}
/end/ {
	# found a line that matches
	# add the next line to the pattern space
	N
	# exchange the previous line with the 
	# 2 in pattern space
	x
	# now add the two lines back
	G
	# and print it.
	p
	# add the three hyphens as a marker
	a\
---
	# remove first 2 lines
	s/.*\n.*\n\(.*\)$/\1/
	# and place in the hold buffer for next time
	h
}

# https://www.grymoire.com/Unix/Sed.html#uh-58
# if an empty line, check the paragraph
/^$/ b para
# else add it to the hold buffer
H
# at end of file, check paragraph
$ b para
# now branch to end of script
b
# this is where a paragraph is checked for the pattern
:para
# return the entire paragraph
# into the pattern space
x
# look for the pattern, if there - print
/start/ p

# https://www.grymoire.com/Unix/Sed.html#uh-59
:again
  s/([ ^I]*)//
  t again

# https://www.grymoire.com/Unix/Sed.html#uh-60
/begin/ {
0i\
  This is a comment\
  It can cover several lines\
  It will work with any version of sed
}

# https://www.grymoire.com/Unix/Sed.html#uh-61
/start/ !{;H;x;s/^.*\n\(.*\n.*\)$/\1/;x;}
/end/ {;H;n;H;x;p;a\
---
}

