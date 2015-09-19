#tuple is just like list but it is immutable
foo = (1,2,3)

#to initiate a tuple with one element, the comma is necessary
foo1 = (1,)

#access
print foo[1]

#tuple can't be updated, it can be concatinate 
foo2 = (4,5,6)

foo3 = foo + foo2 
print foo3

#useful built in method
print len(foo3)
print max(foo3)
print min(foo3)
