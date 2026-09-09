#pragma once

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

