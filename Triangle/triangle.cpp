#include "triangle.h"
#include "stdexcept"

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