#include "Register.h"

Register::Register()
{
}
//string id, name;
//string address, email, phoneNumber;
void Register::takeInformation()
{
	cout << "Enter Your Name : ";
	cin >> name;
	cout << "Enter Your Id : ";
	cin >> id;
	cout << "Enter Your E-mail : ";
	cin >> email;
	cout << "Enter Your Phone Number : ";
	cin >> phoneNumber;
	cout << "Enter Your Address : ";
	cin >> address;
	customer.takeInformaion(name, id, address,
		email, phoneNumber);
}
