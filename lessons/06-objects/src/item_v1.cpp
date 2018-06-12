#include "item_v1.h"

// Note that in front of each function name, now we have the namespace 
// corresponding to the class:  ''Item::''
// This is necessary to inform the compiler that the function definition 
// belongs to the function in the class

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

