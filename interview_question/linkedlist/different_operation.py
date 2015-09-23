from implementation import *

def detect_collision(linked_list):
	# case of empty 
	if(linked_list.head == None):
		return False 
	# case of 1
	elif(linked_list.head.next_node == None):
		return False
	# case of >= 2
	else:
		ptr1 = linked_list.head 
		ptr2 = linked_list.head.next_node 
		while(ptr1 != None and ptr2 != None):
			if(ptr1.value == ptr2.value):
				return True
			if(ptr2.next_node != None):
				ptr2 = ptr2.next_node.next_node
				ptr1 = ptr1.next_node
			else:
				break
		return False


n1 = node(1)
n2 = node(2)
n3 = node(3)

n1.set_next(n2)
n2.set_next(n3)

p1 = node(0)

foo = linked_list(p1)

print detect_collision(foo)

