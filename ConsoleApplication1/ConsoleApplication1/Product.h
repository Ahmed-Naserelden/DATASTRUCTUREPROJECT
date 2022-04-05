#pragma once
#include "Object.h"
#include "Product.h"
#include <iostream>
using namespace std;

class Product :
    public Object
{
    double price = 0.0;
    int quantity;
    string category, sellerId;
public:
    Product();

    Product(string name, string id,
        double price, int quantity,
        string category, string sellerId);

    Product(double price, int quantity,
        string category, string sellerId);

    double getPrice();
    int getQuantity();
    string getCategory();
    string getSellerId();

    void setPrice(double);
    void setQuantity(int);
    void setCategory(string);
    void setSellerId(string);

    ~Product();
};

