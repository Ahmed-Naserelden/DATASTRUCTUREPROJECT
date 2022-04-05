#include "Customer.h"

Customer::Customer()
{
}

Customer::Customer(string name, string id, string address, string email, string phoneNumber, Cart customerCart):Object(name, id),
    address(address), email(email), phoneNumber(phoneNumber), customerCart(customerCart)
{
}

Customer::Customer(string email, string phoneNumber, Cart customerCart): address(address), email(email),
    phoneNumber(phoneNumber), customerCart(customerCart)
{
}

void Customer::setAddress(string address)
{
    this->address = address;
}

void Customer::setEmail(string email)
{
    this->email = email;
}

void Customer::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Customer::setCustomerCart(Cart customerCart)
{
    this->customerCart = customerCart;
}
string Customer::getAddress()
{
    return this->address;
}

string Customer::getEmail()
{
    return this->email;
}

string Customer::getPhoneNumber()
{
    return this->phoneNumber;
}

Cart Customer::getCustomerCart()
{
    return this->customerCart;
}
void Customer::takeInformaion(string name, string id, string address,
    string email, string phoneNumber) {
    Object(name, id);
    this->address = address;
    this->email = email;
    this->phoneNumber = phoneNumber;
}
Customer::~Customer()
{
}
