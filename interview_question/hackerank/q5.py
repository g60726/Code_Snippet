string = raw_input()
info = raw_input()

temp = info.split(" ")
indexx = temp[0]
character = temp[1]
result = ""
counter = 0
for i in string :
	if (indexx == counter):
	counter += 1
	print "counter is:" + str(counter)

print result