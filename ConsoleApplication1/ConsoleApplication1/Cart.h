#pragma once
#include <iostream>
#include "Product.h"
#include <vector>
using namespace std;
class Cart{
	vector<Product> listOfProducts;
	double totalPrice;
public:
	Cart();
	void addProduct(Product product);
	void deleteProduct(Product product);
	void displayCart();
	double getTotalPrice();
	~Cart();
};

