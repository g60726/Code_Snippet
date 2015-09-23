x = 1
y = 1 
z = 1
N = 2

for i in range (0, x + 1):
	for p in range (0, y + 1):
		for q in range (0, z + 1):
			if ((i + p + q) != N ):
				print [i,p,q] 
