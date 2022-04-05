#include "Object.h"

Object::Object()
{
}

Object::Object(string name, string id):name(name), id(id)
{
}
void Object::setId(string id)
{
	this->id = id;
}
void Object::setName(string name)
{
	this->name = name;
}
string Object::getId() {
	return this->id;
}
string Object::getName() {
	return this->name;
}
Object::~Object() {

}