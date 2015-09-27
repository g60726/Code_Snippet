"""Given two sparse Vectors, compute the Dot Product. 
Input Format : The first line will contain two numbers(k and n), which are the number of entries for the two vectors respectively. 
The next k lines are the entries for the first vector, of the form : x y 
where x is the position and y is the value at that position in the vector. 
The n lines are the entries of the second vector. 
Any entries not specified indicate zero at that position. 
The two vectors will always be of the same length 

Example input: 
3 3 
1 4 
4 2 
5 3 
1 7 
2 6 
5 1 

Sample Answer: Dot Product = 4*7+3*1 = 31 (only print 31) """

entry = raw_input()
entry = entry.split(" ")
line_x = int(entry[0])
line_y = int(entry[1])
dict_x ={}
dict_y ={}
counter = 0
while (counter < line_x):
	temp = raw_input()
	temp = temp.split(" ")
	x_v = int(temp[0])
	y_v = int(temp[1])
	dict_x.update({ x_v : y_v })
	counter += 1

counter = 0
while (counter < line_y):
	temp = raw_input()
	temp = temp.split(" ")
	x_v = int(temp[0])
	y_v = int(temp[1])
	dict_y.update({ x_v : y_v })
	counter += 1

sumr = 0

for i in dict_x.keys():
	if(dict_y.has_key(i)):
		sumr += dict_x[i] * dict_y[i]

print sumr

