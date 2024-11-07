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


