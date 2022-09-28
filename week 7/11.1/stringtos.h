#include <iostream>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
 
struct Point{
    double x;
    double y;
 
    std::string to_s(){
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(Point p){
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    }
}; 
 
int main(){
    std::ifstream infile;
    infile.open("points.txt");
 
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
 
    std::vector<Point> points;
    Point tmp;
 
    while(infile >> tmp.x >> tmp.y){
        points.push_back(tmp);
    }
 
    infile.close();
 
    // TODO: 
    // print the content of the vector
    // using a loop calling member function to_s 
    // on each element in the vector
    for(int i; i < points.size(); i++){
	Point current = points[i];
	std::cout << current.to_s() << std::endl;
    }
}
