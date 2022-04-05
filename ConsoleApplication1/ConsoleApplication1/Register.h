#pragma once
#include <iostream>
#include "Customer.h"
using namespace std;
class Register
{
	string id, name;
	string address, email, phoneNumber;
	Customer customer;
public:
	Register();
	void takeInformation();
};

