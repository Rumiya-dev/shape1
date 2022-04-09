#include "rectangle.h"

rectangle::rectangle() {
	std::cout << "Rectangle constructor:\n";
}
rectangle::~rectangle() {
	std::cout << "Rectangle destructor :\n";
}

rectangle::rectangle(std::string name, double w, double h) :
	shape(name) {
	this->width = w;
	this->height = h;
}

std::string rectangle::get_name() {
	return this->name = name;
}

void rectangle::set_name(std::string name)
{
	std::cout << name << std::endl;
	//return 0;
}
double rectangle::area() {
	return this->height * this->width;
}

