#include <iostream>
 
int main(){
 
  double x, temp = 0;
  int n, counter = 0;

  std::cin >> x >> n;

  while(counter < n){
      temp = temp + x;
      counter = counter + 1;
  }

  std::cout << x << "^" << n <<  " = " << temp << std::endl;
 
}