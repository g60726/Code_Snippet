#ref : http://www.tutorialspoint.com/python/python_files_io.htm
fo = open('foo.txt','wb')
fo.write("Hello World")
fo.close()

# reading the file line by line 
with open("foo.txt","r") as f :
	print f.readline()
f.close()
