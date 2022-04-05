#include "Cart.h"

Cart::Cart()
{
    totalPrice = 0.0;
}

void Cart::addProduct(Product product)
{
    listOfProducts.push_back(product);
}

void Cart::deleteProduct(Product product)
{
    for (int i = 0; i < listOfProducts.size(); i++) {
        if (listOfProducts[i].getId() == product.getId()) {
            listOfProducts.erase(listOfProducts.begin() + i);
            totalPrice -= product.getPrice();
            break;
        }
    }
}

void Cart::displayCart()
{
    cout << "Name" << '\t' << "Price" << "\n";
    for (auto product : listOfProducts) {
        cout << product.getName() << '\t' << product.getPrice() << "\n";
    }
    cout << getTotalPrice() << "\n";
}

double Cart::getTotalPrice()
{
    return totalPrice;
}

Cart::~Cart()
{
    totalPrice = 0.0;
    listOfProducts.clear();
}
