// main.cpp : Defines the entry point for the application.
//

#include "main.h"
using namespace std;

int main(void) {
    {
        rectangle rec("Rectanleeeeeee", 10, 23.25);
        std::cout << rec.area() << std::endl;
        std::cout << rec.get_name() << std::endl;
        rec.set_name("Eeeeeeee");
        std::cout << rec.get_name() << std::endl;
    }

    {
        square squ("Squareeeee", 10.255);
        std::cout << squ.get_name() << std::endl;
        squ.set_name("AAAaaaa");
        std::cout << squ.get_name() << std::endl;
        std::cout << squ.area() << std::endl;
    }
}