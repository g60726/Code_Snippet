size = int(raw_input())
m = []
for i in range (size):
	row = []
	temp = raw_input()
	for char in temp:
		char = int(char)
		row.append(char)
	m.append(row)

def check_cavity(m,x,y,size):
	#edge
	#print "checking: " + str(x)
	#print "checking: " + str(y)

	if(x == 0 or x == size - 1):
		#print "edge"
		return False
	if(y == 0 or y == size - 1):
		#print "edge"
		return False
	else:
		upper = m[y-1][x]
		#print "upper: " + str(upper)
		left = m[y][x-1]
		#print "left: " + str(left)
		right = m[y][x+1]
		#print "right: " + str(right)
		down = m[y+1][x]
		#print "down: " + str(down)
		current = m[y][x]
		#print current
		if(current > upper and current > left and current > right and current > down):
			return True
		else:
			return False

y = 0
while (y < size):
	x = 0
	thing = ""
	while (x < size):
		#check if that is a cavity 
		if(check_cavity(m,x,y,size)):
			thing+= "X"
		else:
			thing+=str(m[y][x])
		x += 1
	print "\n"
	y += 1 
