#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
 
class Point{
 
	public:
		// TODO: add constructors (using the initializer list)
 		Point() :x(0), y(0) {};
		Point(double ix, double iy) :x(ix), y(iy) {};
		// TODO: add the missing line here
		std::string to_s() const{
			return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
		}
 
		// TODO: add the missing line here
		double distance(Point p) const {
			return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    		}
		// note that we can access 
    		// the private member data x and y of p
    		// even if it's a different object 
		// because it's an instance of the same class
 
	private:
 
    		double x;
    		double y;
 
}; 
 
double sum_distances_points(const std::vector<Point>& pv){
	// TODO: complete this function
	Point current, next;
	double sum = 0;
	for(int i = 0; i < pv.size() -1; i++){
		current = pv[i];
		next = pv[i+1];
		sum = sum + current.distance(next);
	}
	return sum;
}


 
int main(){
	std::ifstream infile;
    	infile.open("points.txt");
 
    	if(!infile.is_open()){
        	std::cout << "error opening file" << std::endl;
        	return EXIT_FAILURE;
    	}
 
    	std::vector<Point> points;
 
    	double inx, iny;
 	
 	while(infile >> inx >> iny){
      		// TODO: 
      		// instantiate an object of type Point within this loop
      		// passing inx and iny to its constructor
      		// then add it to vector points
      		// (since the instantiation happens within the loop
      		//  a different object, although with the same name,
      		//  will actually be instantiated at each iteration)
		Point tmp(inx,iny);
		points.push_back(tmp);

    	} 
 
    	infile.close();

	std::cout << sum_distances_points(points) << std::endl;
 

}


