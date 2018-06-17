#include <cassert>

#include "linkedlist.h"

void TestMyNode() {
  std::cout << std::endl << "TESTING NODE CLASS...." << std::endl;

  MyNode node1(100);
  MyNode node2(200);
  
  node1.SetNext(&node2);
  
  assert(node1.GetData() == 100);
  assert(node2.GetData() == 200);
  assert(node1.GetNext() == &node2);
  assert(node2.GetNext() == nullptr);
  
  node2.SetData(300);
  
  assert(node2.GetData() == 300);

  std::cout << "Printing Node1 (should be 100)\n";
  node1.Print(); 
  std::cout << "Printing Node2 (should be 300)\n";
  node2.Print(); 
  
  std::cout << "Assertions completed\n";
}

void TestMyLinkedList() {
  std::cout << std::endl << "TESTING LINKED LIST CLASS...." << std::endl;
  
  MyLinkedList llist;
  
  std::cout << "Creating list of 100 elements, from 0 to 99\n";
  for (int i = 0; i < 100; i++) {
    llist.Insert(i,i);
  }

  assert(llist.Size() == 100);
  assert(llist.GetData(5) == 5);
  assert(llist.GetData(0) == 0);
  
  std::cout << "Printing the list. Should be from 0 to 99:\n";
  llist.Print();

  std::cout << "Erasing 51th element (index 50)\n";
  llist.Erase(50);

  assert(llist.GetData(50) == 51);
  assert(llist.Size() == 99);

  std::cout << "Inserting in index 50 the number 300\n";
  llist.Insert(300,50);
  
  assert(llist.GetData(49) == 49);
  assert(llist.GetData(50) == 300);
  assert(llist.GetData(51) == 51);
  
  std::cout << "Printing the list. Should be from 0 to 99,\n"
            << "but element 50 should be 300: 0 1 ... 49 300 51 ...\n";
  llist.Print();
  
  std::cout << "Assertions completed\n";
}

int main() {
  TestMyNode();

  TestMyLinkedList();

  return 0;
}
