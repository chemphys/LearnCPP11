#include <iostream>
#include "item_v1.h"

int main() {

  std::cout << "Creating an item...\n";
  Item myItem;

  std::cout << "Setting name      to `chocolate`\n"
            << "        price     to `$1.15`\n"
            << "        num_items to `10`\n";

  myItem.SetName("chocolate");
  myItem.SetPrice(1.15);
  myItem.SetNumItems(10);

  std::cout << "Now, myItem is " << myItem.GetName() 
            << " with a price of $" << myItem.GetPrice() 
            << " and " << myItem.GetNumItems() << " items in stock\n";
    

  return 0;
}
