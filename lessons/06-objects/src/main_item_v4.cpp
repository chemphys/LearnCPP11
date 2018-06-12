#include "item_v4.h"

int main() {

  std::cout << "Create empty Item object...\n"; 
  Item myItem;
  
  std::cout << "Print contents of the recently created item\n\n";

  myItem.PrintItem();

  
  std::cout << "\nSetting name      to `chocolate`\n"
            << "        price     to `$1.15`\n"
            << "        num_items to `10`\n\n";

  myItem.SetName("chocolate");
  myItem.SetPrice(1.15);
  myItem.SetNumItems(10);

  std::cout << "Print contents of the updated item\n\n";
  myItem.PrintItem();
    
  std::cout << "\n Create new item object with values:\n"
            << " Item mySecondItem(\"candy\",0.25,100)\n";

  Item mySecondItem("candy",0.25,100);

  std::cout << "\nPrint mySecondItem.PrintItem()\n\n";
  
  mySecondItem.PrintItem();

  return 0;
}
