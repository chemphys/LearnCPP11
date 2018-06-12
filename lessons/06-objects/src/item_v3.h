#ifndef ITEM_V3_H
#define ITEM_V3_H

#include <string>
#include <iostream>

/* Class Item 
 * Description: Contains information about items in a store
 */
class Item {
  public:
    // Constructor
    Item();    

    // Mutators or Setters
    /* void SetName 
     * Sets the name of the item to the name given in the argument
     */
    void SetName(std::string name);
    /* void SetPrice 
     * Sets the price of the item to the price given in the argument
     */
    void SetPrice(double price);
    /* void SetNumItems 
     * Sets the numebr of items to the number of items given in the argument
     */
    void SetNumItems(int num_items);
    
    // Accessors or Getters
    /* std::string GetName()
     * Returns the name of the item
     */
    std::string GetName();
    /* std::string GetPrice()
     * Returns the price of the item
     */
    double GetPrice();
    /* std::string GetNumItems()
     * Returns the number of items
     */
    int GetNumItems();
    /* void PrintItem()
     * Prints the information in item
     */
    void PrintItem();
  private:
    // Class members
    // name_: holds the name of the item
    std::string name_; 
    // price_: holds the price of the item in dollars
    double price_;
    // num_items_: holds the number of items remaining in the store
    int num_items_;
};

#endif // ITEM_V3_H
