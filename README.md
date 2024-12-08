# DataStructuresExplorer 🚀

## Project Status
🚧 **Work in Progress** 🚧
This project is an ongoing exploration of fundamental data structures in C++, aimed at providing a comprehensive implementation and visualization.

## Overview
DataStructuresExplorer is a C++ project that implements and demonstrates key data structures with a focus on clear, educational implementations and potential graphical interfaces.

## Supported Data Structures

### 1. Stack 📚
- **Description**: Last-In-First-Out (LIFO) data structure
- **Operations**: 
  - `push()`: Add an element to the top
  - `pop()`: Remove the top element
- **Use Cases**: Function call management, undo mechanisms, depth-first search

```cpp
class Stack {
public:
    void push(int value);
    int pop();
    bool isEmpty();
    bool isFull();
};
```

### 2. Queue 🚦
- **Description**: First-In-First-Out (FIFO) data structure
- **Operations**:
  - `enqueue()`: Add an element to the rear
  - `dequeue()`: Remove the front element
- **Use Cases**: Task scheduling, print job management, breadth-first search

```cpp
class Queue {
public:
    void push(int value);
    int pop();
    bool isEmpty();
    bool isFull();
};
```

### 3. Linked List 🔗
- **Description**: Dynamic data structure with nodes linked together
- **Operations**:
  - Insertion
  - Deletion
  - Traversal
- **Use Cases**: Dynamic memory allocation, implementing other data structures

### 4. Tree 🌳
- **Description**: Hierarchical data structure with parent-child relationships
- **Types**: 
  - Binary Tree
  - AVL Tree
  - Red-Black Tree
- **Use Cases**: Searching, sorting, database indexing

### 5. Hash Table 🔑
- **Description**: Key-value pair storage with O(1) lookup
- **Operations**:
  - Insert
  - Delete
  - Search
- **Use Cases**: Caching, dictionaries, quick lookups

### 6. Graph 🌐
- **Description**: Collection of nodes and edges
- **Types**:
  - Directed
  - Undirected
  - Weighted
- **Use Cases**: Social networks, routing algorithms, mapping

### 7. Heap 🏔️
- **Description**: Special tree-based structure
- **Types**:
  - Max Heap
  - Min Heap
- **Use Cases**: Priority queues, heap sort

### 8. Trie 🔤
- **Description**: Prefix tree for string storage
- **Use Cases**: Autocomplete, spell checking, IP routing

### 9. Balanced Binary Search Tree 🌲
- **Description**: Self-balancing binary search tree
- **Types**:
  - AVL Tree
  - Red-Black Tree
- **Use Cases**: Database indexing, maintaining sorted data

### 10. Deque (Double-Ended Queue) ↔️
- **Description**: Queue allowing insertion/deletion from both ends
- **Use Cases**: Advanced algorithms, memory management

## Technologies
- **Language**: C++
- **Development Environment**: Embarcadero RAD Studio
- **Graphics**: VCL (Visual Component Library)

## Installation
1. Clone the repository
2. Open the project in Embarcadero RAD Studio
3. Build and run

## Contribution
Contributions are welcome! Please read the contribution guidelines before getting started.

## Future Roadmap
- [ ] Complete implementation of all data structures
- [ ] Add comprehensive unit tests
- [ ] Develop graphical visualization
- [ ] Optimize performance
- [ ] Create interactive learning modules
