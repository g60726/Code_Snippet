foo = "Hello World!"

#retrieve character
print foo[0]

#string slice
print foo[0:3]

#formatting string
print "The character %c, the string is %s, the number is %d" % ('a',"Ken",2.3)

# using the """ """ 
foo1 = """Hi
my name is
\"Ken\"
"""

print foo1

#Some built-in method

#find substring
print foo.find("Hello")

#endswith substring
print foo.endswith("!")

#split 
print foo.split("l") #['He', '', 'o Wor', 'd!']

#string length
print len(foo)

#method reference : http://www.tutorialspoint.com/python/python_strings.htm

