#include <iostream>
int main() {
	int h, l;
	double S;

	std::cout << "Input height of a triangle" << std::endl;
	std::cin >> h;
	std::cout << "Input length of the side" << std::endl;
	std::cin >> l;

	S = h * l * 0.5;

	std::cout << "S = " << S;
	return 0;
}