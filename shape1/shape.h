#pragma once
#include <string>

class shape {
public:
	shape(std::string name);
	shape();
	virtual std::string get_name();
	virtual void set_name(std::string name);


	virtual double area();
	std::string name;

};
