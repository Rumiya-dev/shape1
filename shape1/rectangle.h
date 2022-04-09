#pragma once
#include "shape.h"
#include <string>
#include <iostream>

class rectangle : public shape {
public:
	rectangle();
	~rectangle();
	rectangle(std::string name, double w, double h);

	std::string get_name();


	void set_name(std::string name);

	double area();
private:
	double width;
	double height;
};