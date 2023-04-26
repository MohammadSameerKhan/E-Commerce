/**
 * Mohammad Khan 
 * gx6174jg
 * Jie
 * 2/6/2023
 * item.h
*/

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Item {
private:
string name;
double price;
int quantity;
public:
Item();
Item(string n, double p, int q);
// Setters
void setName(string s);
void setPrice(double p);
void setQuantity(int q);
// Getters
string getName();
double getPrice();
int getQuantity();

friend istream& operator >>(istream&, Item&);

};

bool operator ==(Item i1, Item i2);

Item operator <<(ostream& os, Item& source);

#endif //ITEM_H