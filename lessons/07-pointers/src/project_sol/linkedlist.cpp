#include "linkedlist.h"

MyLinkedList::MyLinkedList() {
  head_ = new MyNode(0);
  num_nodes_ = 0;
}

MyLinkedList::~MyLinkedList() {
  if (num_nodes_ > 0) {
    MyNode * next = head_->GetNext();
    while (next != nullptr) {
      MyNode * next_new = next->GetNext();
      delete next;
      next = next_new;
    }
  }
  delete head_;
}

void MyLinkedList::Insert(int data, int pos) {
  MyNode * curr = head_;
  MyNode * next = head_->GetNext();
  int n = 0;
  while (n < pos) {
    curr = next;
    next = curr->GetNext();
    n++;
  }

  MyNode * newNode = new MyNode(data,next);
  curr->SetNext(newNode);
  num_nodes_++;
}

void MyLinkedList::Erase(int pos) {
  MyNode * curr = head_;
  MyNode * next = head_->GetNext();
  int n = 0;
  while (n < pos) {
    curr = next;
    next = curr->GetNext();
    n++;
  }

  MyNode * nextNextNode = next->GetNext();
  delete next;

  curr->SetNext(nextNextNode);
  num_nodes_--;
}

void MyLinkedList::Print() {
  MyNode * curr = head_;
  MyNode * next = head_->GetNext();
  while (next != nullptr) {
    std::cout << " " << next->GetData();
    curr = next;
    next = curr->GetNext();
  }

  std::cout << std::endl;
}

int MyLinkedList::GetData(int pos) {
  MyNode * curr = head_;
  MyNode * next = head_->GetNext();
  int n = 0;
  while (n < pos) {
    curr = next;
    next = curr->GetNext();
    n++;
  }
  
  return next->GetData();
}

int MyLinkedList::Size() {
  return num_nodes_;
}
