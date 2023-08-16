# Singly Linked List

A Singly Linked List is a fundamental data structure in computer science used to store a collection of elements in a linear order. Each element in a singly linked list is called a "node," containing both data and a reference (or link) to the next node in the sequence.

## Insertion Operations

### 1. Insert at the Start of the List

Inserting an element at the beginning of a singly linked list involves updating the "next" reference of the new node to point to the current head node. The new node becomes the new head of the list.

### 2. Insert at the End

To insert an element at the end of a singly linked list, you locate the current tail node and update its "next" reference to point to the new node. The new node becomes the new tail of the list.

### 3. Insert in Between

Inserting an element in the middle of the list requires finding the node just before the desired position. You update the "next" reference of that node to point to the new node, and the "next" reference of the new node to point to the node that used to occupy the position.

### 4. Insert at a Given Index

Inserting an element at a specific index is similar to the previous case, but you need to traverse the list to find the node at the specified index. Once found, update the references as described earlier to insert the new node.

## Use Cases

Singly-linked lists are versatile and used in various scenarios:

- **Dynamic Resizing:** Efficient dynamic resizing of data storage.
- **Stacks and Queues:** Implementing fundamental data structures like stacks and queues.
- **Memory Allocation:** An alternative memory allocation method to arrays.
- **Undo Functionality:** Implementing undo functionality in applications.

Understanding the insertion methods and their time complexity implications is essential for effectively utilizing singly linked lists in different situations
