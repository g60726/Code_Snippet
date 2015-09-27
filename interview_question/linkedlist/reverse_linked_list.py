from implementation import *

def reverse_list(head):
	#empty 
	if(head == None):
		return None
	#1 node
	elif(head.next_node == None):
		return linked_list.head
	# >= 2 node
	else:
		new_head = head 
		traverse = head.next_node
		new_head.next_node = None
		while(traverse != None):
			temp = traverse
			traverse = traverse.next_node
			#preppend this temp to new_head
			temp.next_node = new_head
			new_head = temp
		return new_head

head = node(1)
foo = linked_list(head)
foo.push(node(2))
foo.print_linked_list()

new_head = reverse_list(foo.head)
foo2 = linked_list(new_head)
foo2.print_linked_list()



