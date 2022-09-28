#include <iostream>
 
int main(){
  double c, f;
  std::cout << "Input the temperature in degrees celsius" << std::endl;
  std::cin >> c;

  f = (1.8 * c) + 32;

  std::cout << "The temperature in farenheit is " << f;
}