#include "Seller.h"

Seller::Seller(string name, string id, string email):email(email), Object(name, id)
{
}

void Seller::setEmail(string email)
{
    this->email = email;
}

string Seller::getEmail()
{
    return email;
}

void Seller::displayInfo()
{
    
    cout << "Name : " << getName() << " \n, "
        << "Id : " << getId() << " \n, "
        << "E-mail : " << getEmail() << "\n";
    
}

Seller::~Seller()
{

}
