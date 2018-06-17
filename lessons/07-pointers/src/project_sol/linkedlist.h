#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class MyLinkedList {
  public:
    // Default constructor. Must define the head node
    MyLinkedList();
    // Destructor
    ~MyLinkedList();

    // Inserts data at the position pos
    // Insert(213,4) will insert a node with value 213 at the fifth position
    // Positions start at 0
    void Insert(int data, int pos);
    // Erases the node ar position pos
    void Erase(int pos);
    // Prints the entire list
    void Print();
    // Returns the data at the position pos
    int GetData(int pos);
    // Returns the numebr of nodes
    int Size();
  private:
    // Number of nodes
    int num_nodes_;
    // Head node
    MyNode * head_;
};

#endif // LINKEDLIST_H
