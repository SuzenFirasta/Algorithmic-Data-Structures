# Week 1: Introduction to Basic Data Structures and Graph Representations

## Overview

This week's lab focuses on implementing fundamental data structures and graph representations. The code included in this week's folder is aimed at providing hands-on experience with Binary Search Trees (BST), adjacency matrices, and adjacency lists. Each code file is accompanied by a brief explanation of the concepts and how they are implemented.

## Contents

- **BSTImplementation.cpp**
- **adjacencyMatrix.cpp**
- **adjacencyListRepresentation.cpp**

### 1. Binary Search Tree (BST)

#### File: `BSTImplementation.cpp`

**Concept**:
A Binary Search Tree (BST) is a node-based data structure in which each node has at most two children, referred to as the left child and the right child. In a BST, for each node:
- The left subtree contains nodes with keys less than the node’s key.
- The right subtree contains nodes with keys greater than the node’s key.

**Operations**:
- **Insertion**: New nodes are added in such a way that the BST properties are preserved.
- **Searching**: The tree is traversed starting from the root to locate the node with the desired key.
- **Traversal**:
  - **Inorder**: Left -> Root -> Right
  - **Preorder**: Root -> Left -> Right
  - **Postorder**: Left -> Right -> Root

**Implementation**:
This implementation includes the insertion of elements into the BST, searching for elements, and performing inorder, preorder, and postorder traversals. If a duplicate element is found during insertion, the program notifies the user and prompts them to enter a new value.

#### Key Functions:
- `insert(int data)`: Inserts a node into the BST.
- `searchAndInsert_BST(int data)`: Searches for a node, and if not found, inserts it.
- `Inorder(Node* node)`, `Preorder(Node* node)`, `Postorder(Node* node)`: Performs the respective tree traversals.

### 2. Graph Representation Using Adjacency Matrix

#### File: `adjacencyMatrix.cpp`

**Concept**:
An adjacency matrix is a 2D array of size `V x V` where `V` is the number of vertices in a graph. Each cell in the matrix represents the presence (or absence) of an edge between two vertices. A value of `1` indicates an edge, and `0` indicates no edge.

**Implementation**:
- The program initializes an `n x n` adjacency matrix with all zeros.
- It then takes input for the number of edges and updates the matrix to represent these edges.
- The final adjacency matrix is printed, showing the connections between vertices.

#### Key Functions:
- The main function handles all logic, from input to matrix initialization and printing.

### 3. Graph Representation Using Adjacency List

#### File: `adjacencyListRepresentation.cpp`

**Concept**:
An adjacency list is a collection of lists or arrays. Each list corresponds to a vertex and contains a list of its adjacent vertices. This representation is more space-efficient for sparse graphs.

**Implementation**:
- The program takes the number of vertices and edges as input.
- For each edge, the adjacent vertices are stored in an array.
- The adjacency list is then printed for each vertex, showing the connected vertices.

#### Key Functions:
- The main function is responsible for taking input, processing the edges, and printing the adjacency list.

## Theoretical Knowledge

### Binary Search Trees
A Binary Search Tree ensures that for each node:
- All values in the left subtree are smaller.
- All values in the right subtree are larger.

This property makes searching efficient, with an average-case time complexity of O(log n). Traversing the tree in different orders (inorder, preorder, postorder) is crucial for various applications, such as sorting (inorder traversal of BST gives sorted order).

### Graphs and Their Representations
Graphs are data structures used to model pairwise relations between objects. The two most common ways to represent graphs are:
- **Adjacency Matrix**: Best for dense graphs where space is not an issue.
- **Adjacency List**: Best for sparse graphs, offering better space efficiency.

### Practical Applications
- **BSTs**: Used in searching algorithms, databases, and to maintain sorted data.
- **Graph Representations**: Used in networks, social connections, maps, and many optimization problems.

## Conclusion

This week’s lab lays the foundation for understanding more complex data structures and their applications. Understanding the implementation details and the underlying theory of these structures is crucial for tackling more advanced topics in data structures and algorithms.
