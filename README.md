**Code Summary Report**

**Overview**
This C++ program implements a Binary Search Tree (BST) using two main classes: `Node` and `Tree`. The `Node` class represents individual elements (nodes) of the tree, while the `Tree` class provides methods to perform standard BST operations such as insertion, traversal, searching, finding minimum and maximum values, and deletion of nodes. The `main` function demonstrates the use of these operations.

---

**Class: Node**
The `Node` class defines the structure of a tree node.

**Data Members**

  * `int data`: Stores the value of the node.
  * `Node* left`: Pointer to the left child node.
  * `Node* right`: Pointer to the right child node.

**Constructor**

  * `Node(int value)`: Initializes a node with the given value and sets both child pointers to `nullptr`.

---

**Class: Tree**
The `Tree` class manages the binary search tree and provides various operations.

**Data Member**

  * `Node* root`: Pointer to the root node of the tree.

**Constructor**

  * `Tree()`: Initializes the tree with an empty root (`nullptr`).

**Functions**

  * `Node* insert(Node* node, int value)`: Inserts a new node with the specified value into the tree while maintaining BST properties. Values smaller than the current node go to the left; larger values go to the right.

  * `void inOrderTraversal(Node* node)`: Traverses the tree in in-order sequence (left, root, right) and prints the node values in sorted order.

  * `void preOrderTraversal(Node* node)`: Traverses the tree in pre-order sequence (root, left, right), often used for copying or representing the tree structure.

  * `void postOrderTraversal(Node* node)`: Traverses the tree in post-order sequence (left, right, root), often used for deleting or freeing the tree.

  * `bool search(Node* node, int value)`: Searches for a specific value in the tree. Returns `true` if the value is found, otherwise `false`.

  * `Node* findMin(Node* node)`: Finds and returns the node with the smallest value in the tree by traversing to the leftmost node.

  * `Node* findMax(Node* node)`: Finds and returns the node with the largest value in the tree by traversing to the rightmost node.

  * `Node* deleteNode(Node* root, int value)`: Deletes a node with the specified value from the tree. It handles three cases:

    1. The node has no children.
    2. The node has one child.
    3. The node has two children, in which case the minimum value from the right subtree replaces the deleted node.

---

**Function: main()**
Demonstrates the use of the `Tree` class.

1. Creates a `Tree` object.
2. Inserts several integer values into the tree.
3. Displays the tree using in-order, pre-order, and post-order traversals.
4. Searches for a specific value in the tree.
5. Finds and displays the minimum and maximum values.
6. Deletes a node with a specific value (40) and displays the updated tree using in-order traversal.

---

**Summary**
The program provides a complete implementation of a Binary Search Tree in C++. It supports essential operations such as insertion, traversal, searching, and deletion while maintaining BST properties. It also demonstrates how to access the smallest and largest elements in the tree.
