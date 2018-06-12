#include "item_v5.h"

int main() {

  std::cout << "Create empty Item object...\n"; 
  Item myItem;
  std::cout << "Empty Item created\n\n";
  
  std::cout << "\nCreate new item object with values:\n"
            << "Item mySecondItem(\"candy\",0.25,100)\n";

  Item mySecondItem("candy",0.25,100);

  std::cout << "\nItem mySecondItem(\"candy\",0.25,100) created\n\n";
  
  std::cout << "Next statement is return, and then we exit main function\n";
  
  return 0;
}
