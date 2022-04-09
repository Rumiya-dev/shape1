#pragma once

#include "shape.h"
#include <string>
#include <iostream>
class square : public shape {
public:
	square();
	~square();
	square(std::string name, double dim);
	std::string get_name();
	void set_name(std::string name);
	double area();


private:
	double dim;

};