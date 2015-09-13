====================reference============================
1. https://en.wikibooks.org/wiki/Data_Structures/Trees
Detail introduction to tree


=======================================================
   
	 ---------traversal------------


pre-order : current -> left -> right

post-order : left -> right -> current

in-order : left -> current -> right

level-order : level by level left to right 


   -----------types---------------

binary tree : each node has either 0, 1, 2 children

binary search tree : a binary tree such that the left child < parent < right child

AVL : a balanced binary search tree that the height of two children subtree differ by at most 1;

Red-Black tree : A balanced binary search tree using a balanced algorithm based on color assigned to each node 

complete binary tree : All levels except for the last one is filled. The last one has leafs as left as possible

   ---------terminology------------

balancing : the act of maintaining balance between two sub-trees, so the look up time at max is lgN. 

leaf : the node in a tree that has no children

sibling : node that share the same parent 



