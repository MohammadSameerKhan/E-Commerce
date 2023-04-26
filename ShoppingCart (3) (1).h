/**
 * Mohammad Khan 
 * gx6174jg
 * Jie
 * 2/6/2023
 * shoppingcart.h
*/


#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Bag.h"
#include "Item.h"

#include <iostream>
#include <iomanip>

using namespace std;

template <class ItemType>
class ShoppingCart : public Bag<ItemType> {
private:
double totalPrice;
public:
ShoppingCart();
double getTotalPrice();
bool add(Item);
bool remove(Item);

};

#include “ShoppingCart.cpp”
#endif //SHOPPINGCART_H