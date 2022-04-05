#pragma once
#include "Object.h"
class Seller :
    public Object
{
    string email;
public:
    Seller(string name, string id, string email);
    void setEmail(string email);
    string getEmail();
    void displayInfo();
    ~Seller();
};

