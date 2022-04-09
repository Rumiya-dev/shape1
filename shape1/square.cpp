#include "square.h"


square::square() {
	std::cout << "square constructor:\n";
}
square::~square() {
	std::cout << "square destructor :\n";
}

square::square(std::string name, double dim) :
	shape(name)
{
	this->dim = dim;
}


std::string square::get_name() {
	return this->name = name;
}

void square::set_name(std::string name)
{
	std::cout << name << std::endl;
	//return 0;
}

double square::area() {
	return this->dim * this->dim;
}


