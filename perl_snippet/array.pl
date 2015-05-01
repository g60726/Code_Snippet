#All about array

#initating an array
$array[0] = 1;
$array[1] = 2;
$array[2] = 3;

#or the other way
my @array2 = (4,5,6);

print $array2[0];

#special index 
$end = $#array; # this will give 2, that gives you the last index 
#accessing the last element using shortcut 
$last_element = $array[-1]; 

#list literal
$list = (1,2,3);
#assigning to multiple variables using list
($n1, $n2, $n3) = qw(Ken Liao Is); #qw will take each word separate by space 
print $n1; #prints out Ken

#pop & push
@num = 5..9; # creating [5,6,7,8,9]
$last_num = pop(@num); # last_num gets 9. @num is now [5,6,7,8]
$new_element = 99;
push(@num, $new_element);

#shift & unshift, just like pop & push, but they act on the beginning of array instead
@num2 = 1..10;
$first_num = shift(@num2);
unshift(@num2);

#using splice 
#splice takes four argument splice(@array, <index of starting position>, [length of truncation], [replacement list]);  [] means optional, <>means mandatory 

#array to string
@fruit = qw(apple orange banana grape);
print @fruit; #will print four words seperated by space

#reverse operator 
@fruit_reverse = reverse(@fruit);

#sort operator
@int = (2,3,1,55,4,60);
@sort_int = sort @int;
print @sort_int;