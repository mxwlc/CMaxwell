#include <iostream>
 
int main(){
  int p, q, i=0;
  // p / q
  // p = dividend
  // q = divisor
  // i = quotient

  // enter p
  std::cout << "Please enter the dividend" << std::endl;
  std::cin >> p;
  // enter q
  std::cout << "Please enter the divisor" << std::endl;
  std::cin >> q;

  // while p >= q, subtract q from p and increase the counter i which represents the quotient
  while(p >= q){
    std::cout << p << " is bigger than " << q << " so we subtract " << q << " from " << p << std::endl;
    
    p = p - q;

    i++;
    
    std::cout <<  "Subtraction number " << i << std::endl << std::endl;;
  }

  //print the quotient, i and the remainder p 
  std::cout << "The quotient is " << i << std::endl;
  std::cout << "The remainder is " << p << std::endl;

}