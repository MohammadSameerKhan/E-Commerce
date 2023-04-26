/**
 * Mohammad Khan 
 * gx6174jg
 * Jie
 * 2/6/2023
 * item.cpp
*/

#include "Item.h"
#include <string>

using namespace std;

Item::Item() {

}

Item::Item(string n, double p, int q) {
name = n;
price = p;
quantity = q;
}

// Setters
void Item::setName(string n) {
name = n;
}
void Item::setPrice(double p) {
price = p;
}
void Item::setQuantity(int q) {
quantity = q;
}

// Getters
string Item::getName() {
return name;
}
double Item::getPrice() {
return price;
}
int Item::getQuantity() {
return quantity;
}

// Definition of the friend function
istream& operator >>(istream& ins, Item& target)
{
ins >> target.name >> target.price >> target.quantity;

return ins;
}

// Definition of non-member functions
// << & == operator overloading
bool operator ==(Item& i1, Item& i2) {
return (i1.getName()==i2.getName() && i1.getPrice()==i2.getPrice()
&& i1.getQuantity()==i2.getQuantity());

}

Item operator <<(ostream& os, Item& source) {
os << source.getName() << " " << source.getPrice() << " " <<source.getQuantity() << endl;
}