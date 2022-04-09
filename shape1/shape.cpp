#include "shape.h"
#include <iostream>

shape::shape(std::string name)
{
}

shape::shape() {
	std::cout << "Constructor Shape :\n";
}


shape::~shape() {
	std::cout << "Desctructor Shape:\n";

}


std::string shape::get_name()
{
	return this->name;
}

void shape::set_name(std::string name)
{
}

double shape::area() {
	return 0;
}



