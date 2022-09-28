#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

struct point{
	double x;
	double y;

	std::string to_s() const {
        	return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    	}
 
	double distance(point p) const {
        	return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    	}
};

struct triangle{
	point p1;
	point p2;
	point p3;

	double perimeter() const {
		return p1.distance(p2) + p2.distance(p3) + p3.distance(p1);
	}
};

int main(){
	triangle tri;
	point p1, p2, p3;
	
	p1.x = 0; p1.y = 0;
	p2.x = 0; p2.y = 1;
	p3.x = 1; p3.y = 0;

	tri.p1 = p1; tri.p2 = p2; tri.p3 = p3;

	std::cout << tri.perimeter();
}
