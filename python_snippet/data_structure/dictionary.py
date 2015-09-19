#init
foo_dic = {"first name":"Ken", "last name" : "Liao"}
print foo_dic['first name']

#edit
foo_dic['first name'] = "Lomis"
print foo_dic['first name']

#useful built in method
foo_dic_2 = foo_dic.copy()
foo_dic_2.clear()
print foo_dic_2

# has_key
print foo_dic.has_key('first name')

# items() returns a list of tuple of (key,value)
print foo_dic.items()

# keys() returns a list of key
print foo_dic.keys()

# update() append new dictionary
temp = {"hey" : "you"}
foo_dic.update(temp)
print foo_dic

#values() returns a list of value
print foo_dic.values()

