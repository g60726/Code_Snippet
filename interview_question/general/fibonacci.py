def print_fibo(n):
	first = 1
	second = 1
	i = 0
	while(i < n):
		if( i == 0):
			print first
		elif (i == 1):
			print second
		else:
			result = first + second
			print result
			first = second 
			second = result
		i += 1

print_fibo(6)

def fibo_recursive(n):
	if( n == 1):
		return 1
	elif (n == 2):
		return 1
	else:
	  return fibo_recursive(n-1) + fibo_recursive(n-2)
	
print fibo_recursive(6)
