from node import *
from linkedlist import *

n1 = Node(1)
n2 = Node(2)

linked_list = LinkedList(n1)
linked_list.push(n2)
linked_list.print_list()

temp = linked_list.pop()
linked_list.print_list()
