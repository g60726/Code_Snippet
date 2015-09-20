# defining a function

def find_diff(x,y):
	return x - y


#calling a function using keyword
print find_diff(y = 2, x = 1)

#defining function with default

def foo(p = 3, q = 4):
	print p
	print q

foo()
foo(1,1)

#variable length arguments, all the non key parameters get pushed to varp tuple
def foo2(arg1, *varp):
	print arg1
	for val in varp:
		print val
	return 

foo2(5,"ken","liao")

#the anonymous function lambda 

sum = lambda x, y : x + y

print sum(20,30)
