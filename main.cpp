#include <iostream>
#include <stdexcept>

class Triangle {
private:
	int height;
	int side;
	double S;
public:
	Triangle(int h, int l);
	
	void set_side(int l);
	void set_height(int h);

	double find_s();


};

Triangle::Triangle(int h, int l) {
	set_side(l);
	set_height(h);
}

void Triangle::set_side(int l) {
	if (l <= 0) {
		throw std::logic_error("Side cannot be below zero!");
	}
	side = l;
}

void Triangle::set_height(int h) {
	if (h <= 0) {
		throw std::logic_error("Height cannot be below zero");
	}
	height = h;
}

double Triangle::find_s() {
	return side * height * 0.5;
}

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