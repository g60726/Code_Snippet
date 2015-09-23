class node:
	def __init__(self, value = None, next_node = None):
		self.value = value
		self.next_node = next_node
	def set_next(self,new_node):
		self.next_node = new_node
	

class linked_list:
	def __init__(self,head):
		self.head = head
	
	def push(self, new_node):
		traverse = self.head
		while(traverse.next_node != None):
			traverse = traverse.next_node
		traverse.next_node = new_node
	
	def pop(self):
		traverse = self.head
		if(traverse.next_node != None):
		  while(traverse.next_node.next_node != None):
				traverse = traverse.next_node
		  result = traverse.next_node
		  traverse.next_node = None
		  return result
		else:
		  return None
	
	def print_linked_list(self):
		traverse = self.head
		while(traverse != None):
			print traverse.value
			traverse = traverse.next_node

	def append(self, new_node):
		temp = self.head
		self.head = new_node
		new_node.next_node = temp





