#include <iostream>
#include <stdexcept>
#include "Triangle/triangle.h"

int main() {
	int h, l;

	std::cout << "Input height of a triangle" << std::endl;
	std::cin >> h;
	std::cout << "Input length of the side" << std::endl;
	std::cin >> l;

	try {
		Triangle t1(h, l);
		std::cout << "S = " << t1.find_s() << std::endl;
	}
	catch (const std::logic_error& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}