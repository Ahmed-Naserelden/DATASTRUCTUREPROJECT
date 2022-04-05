#include "Product.h"

Product::Product()
{
}

Product::Product(string name, string id, double price, int quantity, string category, string sellerId):Object(name, id),
	price(price), quantity(quantity),
	category(category), sellerId(sellerId)
{
}

Product::Product(double price, int quantity, string category, string sellerId):
	price(price), quantity(quantity),
	category(category), sellerId(sellerId)
{
}

double Product::getPrice()
{
	return this->price;
}

int Product::getQuantity()
{
	return this->quantity;
}

string Product::getCategory()
{
	return this->category;
}

string Product::getSellerId()
{
	return this->sellerId;
}

void Product::setPrice(double price)
{
	this->price = price;
}

void Product::setQuantity(int quantity)
{
	this->quantity = quantity;
}

void Product::setCategory(string category)
{
	this->category = category;
}

void Product::setSellerId(string sellerId)
{
	this->sellerId = sellerId;
}

Product::~Product()
{
}

