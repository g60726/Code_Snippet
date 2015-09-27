inp = 15


def check_possible(inp):
	avail = [6,1]
	avail.sort()
	outer = len(avail) - 1
	while(outer >= 0):
		temp = inp
		inner = outer
		while(inner >= 0):
			if(temp == 0):
				return True
			if(temp < 0):
				temp += avail[inner]
				inner -= 1
			else:
				temp -= avail[inner]
		outer -= 1
	return False

print check_possible(inp)
