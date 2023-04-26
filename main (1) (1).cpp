/**
 * Mohammad Khan 
 * gx6174jg
 * Jie
 * 2/6/2023
 * main
*/

#include "ShoppingCart.h"
#include "Item.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
cout << "Welcome to XXX SHOPPING CENTER" << endl;

Item items[10];
ShoppingCart<Item> cart;

cout << "Enter the item you selected as the following order:\nname unitPrice quantity"
<< "\n(Name can not contain any space. Otherwise errors happen!)" << endl;

cin >> items[0];

cart.add(items[0]);

cout << "The shopping cart contains: " << endl;

cout << items[0];

cout << "The total price of the order is " << cart.getTotalPrice() << endl;

return 0;
}