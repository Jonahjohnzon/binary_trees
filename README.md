# A GLIMPSE OF THE WORLD OF BINARY TREES

BY JONAH OMONYI AND EMEDO CHIAMAKA
FULL STACK SOFTWARE ENGINEERING STUDIES ALX FOUNDATIONS.

## 0x1D. C - Binary trees

<img align="center" alt="Coding" width="400" src="https://i.pinimg.com/originals/3a/64/55/3a6455ecfd1896e6364e8463e388ca18.gif">

## Learning Objectives
The primary aim was to understand the concepts, methods, types and brief history of the following:

- What is a binary tree.
- What is the difference between a binary tree and a Binary Search Tree.
- What is the possible gain in terms of time complexity compared to linked lists.
- What are the depth, the height, the size of a binary tree.
- What are the different traversal methods to go through a binary tree.
- What is a complete, a full, a perfect, a balanced binary tree.

## Resources and Requirements

At the end of this project, all resources and requirements were implemented in completing each task;

Read or watch:

- Binary tree (note the first line: Not to be confused with B-tree.).
- Data Structure and Algorithms - Tree.
- Tree Traversal.
- Binary Search Tree.
- Data structures: Binary Tree.

## Data structures
The following data structures and types for binary trees was used for this project and included in the header file.

Basic Binary Tree
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Binary Search Tree
typedef struct binary_tree_s bst_t;

AVL Tree
typedef struct binary_tree_s avl_t;

Max Binary Heap
typedef struct binary_tree_s heap_t;

## Print function
The print function was available to match the examples in the tasks. This function is used only for visualization purposes.
