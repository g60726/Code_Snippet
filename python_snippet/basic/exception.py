#assert will raise AssertionError if the epxress evaluates to false
x = 1 
assert (x < 2) , "X is bigger"

#try exception else
try:
	f = open("ken.txt","r")
except IOError:
	print "Can\'t find this file"
else:
	print "open"
	f.close()

try:
	x = 4/0
	print x
except ZeroDivisionError:
	print "You are trying to divide by 0"
finally:
	print "I must execute"

#user define exception (can be a class, string, obejct)
class KenException(RuntimeError):
	def __init__(self, arg):
		self.arg = arg
		

try:
	raise KenException, "shit"
except KenException , k:
	print k.arg
finally:
	print "Done"

#ref http://www.tutorialspoint.com/python/python_exceptions.htm
