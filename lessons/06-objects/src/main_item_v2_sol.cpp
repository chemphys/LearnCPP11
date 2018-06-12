#include "item_v2_sol.h"

int main() {

  Item myItem;

  std::cout << "Setting name      to `chocolate`\n"
            << "        price     to `$1.15`\n"
            << "        num_items to `10`\n";

  myItem.SetName("chocolate");
  myItem.SetPrice(1.15);
  myItem.SetNumItems(10);

  myItem.PrintItem();
    

  return 0;
}
