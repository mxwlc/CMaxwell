#include <iostream>
#include <string>
#include <cmath>


struct point {
	double x;
	double y;

	point(){
		x = 0;
		y = 0;
	}

	point(double ix, double iy){
		x = ix;
		y = iy;
	}

	std::string to_s(){
		return "(" + std::to_string(x) + " , " + std::to_string(y) + ")";
	}

	double distance() const {
		return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
	}

	double distance(point p){
		return std::sqrt(std::pow((x-p.x), 2) + std::pow((y-p.y),2));
	}
};

int main(){
	point a(1,1);
	std::cout << a.distance();
}

