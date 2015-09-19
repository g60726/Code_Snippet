#Python list is like Array

foo = [5,6,7,8]
print foo[1]
foo[1] = 'c'
print foo[1]

#built in method

del foo[1] #delete the element
print foo

print len(foo) #get the lenght of list

foo1 = ['a','b','c']
foo2 = foo + foo1 #list concatination 
print foo2 #print [5,7,8,a,b,c]

#useful list built in method 

#add element at the end
foo1.append('k')
print foo1

#add a list to a list
foo1.extend(['t','j'])
print foo1

#remove and return the last element
foo1.pop()
print foo1

#reference http://www.tutorialspoint.com/python/python_lists.htm
