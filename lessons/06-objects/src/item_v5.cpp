#include "item_v5.h"

Item::Item() {
  std::cout << "We are inside the default constructor\n";
  name_ = "Empty";
  price_ = 0.0;
  num_items_ = 0;
}

Item::Item(std::string name, double price, int num_items) {
  std::cout << "We are inside the overloaded constructor Item::Item(std::string name, double price, int num_items)\n";
  name_ = name;
  price_ = price;
  num_items_ = num_items;
}

Item::~Item() {
  std::cout << "We are inside the destructor for item " << name_ << std::endl;
}

void Item::SetName(std::string name) {
  // We can access name_ directly from inside the class, 
  // but not from the outside
  name_ = name;
}

void Item::SetPrice(double price) {
  price_ = price;
}

void Item::SetNumItems(int num_items) {
  num_items_ = num_items;
}

std::string Item::GetName() {
  return name_;
}

double Item::GetPrice(){
  return price_;
}

int Item::GetNumItems(){
  return num_items_;
}

void Item::PrintItem() {
  std::cout << "Name: " << name_ << std::endl
            << "Price: $" << price_ << std::endl
            << "Number of items: " << num_items_ << std::endl;
}
