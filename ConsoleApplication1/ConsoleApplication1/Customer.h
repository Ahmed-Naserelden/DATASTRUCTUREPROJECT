#pragma once
#include "Object.h"
#include "Cart.h"
class Customer :
    public Object
{

    string address, email, phoneNumber;
    Cart customerCart;

public:
    Customer();
    Customer(string name, string id, string address,
        string email, string phoneNumber, Cart customerCart);
    Customer(string email, string phoneNumber, Cart customerCart);
    void setAddress(string);
    void setEmail(string);
    void setPhoneNumber(string);
    void setCustomerCart(Cart);

    void takeInformaion(string name, string id, string address,
        string email, string phoneNumber);

    string getAddress();
    string getEmail();
    string getPhoneNumber();
    Cart getCustomerCart();
    ~Customer();
};

