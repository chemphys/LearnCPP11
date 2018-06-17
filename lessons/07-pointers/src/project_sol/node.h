#ifndef NODE_H
#define NODE_H

#include <iostream>

class MyNode {
  public:
    // Default constructor
    MyNode();
    // Overload constructor
    // Needs data, next node is optional initialized to nullptr
    MyNode(int data, MyNode * nextNode = nullptr);
    // Destructor
    ~MyNode();

    // Prints the value of the node in the screen
    void Print();
    // Sets the next node pointer
    void SetNext(MyNode * nextNode);
    // Sets the data of the node
    void SetData(int data);
    // Returns the data of the node
    int GetData();
    // Returns a pointer to the next node
    MyNode * GetNext();
  private:
    // Integer data of the node
    int data_;
    // Pointer to the next node
    MyNode * nextNode_;
};


#endif // NODE_H
