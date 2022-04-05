#include "Login.h"
Login::Login() {
	userLogin();
}
void Login::userLogin() {
	cout << "Enter Your name : ";
	cin >> name;
	cout << "Enter Your E-mail : ";
	cin >> email;
	interacte();
}

bool Login::checkAcurret() {
	if (name == "ahmed") {
		if (email == "ahmed") {
			return true;
		}
	}
	return false;
}
bool Login::interacte() {
	if (checkAcurret()) {
		return true;
	}
	else {
		cout << "Name or E-mail aren't Correct\n";
		userLogin();
	}
}