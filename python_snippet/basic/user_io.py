# difference between input and raw_input is input will evaluate possible python expression and raw_input will not 
user_raw_input = raw_input("Enter a string");

print "You have entered : %s" % (user_raw_input)

user_input = input("Enter a string: ")

print user_input

#integer conversion from string 
x = int(raw_input())
y = int(raw_input())

z = x + y
print z
