#pragma once
#include <iostream>
using namespace std;
class Object
{
	string id, name;
public:
	Object();
	Object(string name, string id);
	void setId(string id);
	void setName(string name);
	string getId();
	string getName();
	~Object();
};

