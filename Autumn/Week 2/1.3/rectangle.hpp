#include <iostream>
 
int main(){
    int l, w, p, a;
    std::cout << "Please input the length of the rectangle" << std::endl ;
    std::cin >> l;
    std::cout << "Please input the width of the rectangle" << std::endl ;
    std::cin >> w;

    p = (2 * l) + (2 * w);
    a = l * w;

    std::cout << "The perimeter of the rectangle is " << p << std::endl;
    std::cout << "The area of the rectangle is " << a << std::endl;
    
}