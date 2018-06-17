#include "node.h"

MyNode::MyNode() {
  MyNode(0);
}

MyNode::MyNode(int data, MyNode * nextNode) {
  data_ = data;
  nextNode_ = nextNode;
}

MyNode::~MyNode() { }

void MyNode::Print() {
  std::cout << data_ << std::endl;
}

void MyNode::SetData(int data) {
  data_ = data;
}

void MyNode::SetNext(MyNode * nextNode) {
  nextNode_ = nextNode;
}

int MyNode::GetData() {
  return data_;
}

MyNode * MyNode::GetNext() {
  return nextNode_;
}
