#include "item_v3.h"

int main() {

  std::cout << "Create Item object...\n"; 
  Item myItem;
  
  std::cout << "Print contents of the recently created item\n\n";

  myItem.PrintItem();

  
  std::cout << "\nSetting name      to `chocolate`\n"
            << "        price     to `$1.15`\n"
            << "        num_items to `10`\n";

  myItem.SetName("chocolate");
  myItem.SetPrice(1.15);
  myItem.SetNumItems(10);

  std::cout << "Print contents of the updated item\n\n";
  myItem.PrintItem();
    

  return 0;
}
