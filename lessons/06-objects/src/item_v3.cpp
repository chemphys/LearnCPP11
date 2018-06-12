#include "item_v3.h"

Item::Item() {
  name_ = "Empty";
  price_ = 0.0;
  num_items_ = 0;
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
