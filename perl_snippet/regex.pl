
use strict; 
#Simple match, to see if a substring is in a string, simply type /<sub_string>/
my $str = "kenliaoisawesome";
if($str ==  /kenliaoisawesome/ ){
  print "It matched\n";
}
else{
  print "It doesn't match\n";
}

$_ = "ke nliao";

if(/ken/){
  print "It matches\n";
}
else{
  print "It doesn't match\n";
}

# you can also match properties
# \p{<Property Name>} \P negate it
# Available choices: Space, Digit, 
$_ = "kenliao ";
if(/\p{Space}/){
  print "matched\n"; #trigger this
}
else{
  print "not matched\n";
}

#Metacharacters are the characters that have special meeting in Perl , backslash in front of any metacharacter escapes it
# . represent wildcard character
$_ = "betty";
if(/bet.y/){
  # betty, bet=y, bet.y will match because it has one character in between and excludes \n
  print "It matches\n";
}
else{
  # bety, betsey will not because they don't have exactly one character in between t & y
  print "It doesn't match\n"
}

#qualifier * match the preceeding item zero or more time 
# /ty\t*ge/ will match "tyge" "ty\t\tge" | it will not match "ty\tg\te"

#qualifier + match the preceeding item one or more time
# remember, space is not a metacharacter, it can be counted as a preceeding item

#qualifer ? specify the preceeding item occurs either once or none


#using () to group parts of patter. It is called a capture group 
$_ = "kenkenkenken";
if(/(ken)+/){
  print "it matches\n"; #This will match kenkenken since the () group ken 
}  
else {
  print "It doesn't match\n";
}

# back reference \1 \2 \3 ... the number is the ith capture group, count the open bracket and ignore nesting
$_ = "So dad and daisy";
if(/(da).*\1/){
  #This will match the above because it means, group da, any character in between, however, another 'da' must occur 
  print "it matches yey\n";
}
else{
  print "it doesn't match\n";
}

#However, since Perl 5.10, the back reference is \i -> \g{i

#Using alternative | , that means if the left fails, will see if the right matches 

$_ = "ken liao";

if(/ken( |\t)liao/){
   print "it matches\n";
}
else{
   print "it doesnt matches\n";
}

# Character Class, a list of possible characters in [ ], can use - to specify range, 52 chars to choose from, 0-9 
# /[a-z]/ will match a, will not match ab nor A

# the caret ^ is negation
# /[^def]/ matches every single character except any one of there 3 characters 


