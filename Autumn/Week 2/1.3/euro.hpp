#include <iostream>
 
int main(){
  double e, p;
  std::cout  << "Please insert the amount of GBP you wish to convert." << std::endl;
  std::cin >> p;

  e = p * 1.18;

  std::cout << "That is " << e << " euros";

}