#include <iostream>
 
int main(){
  int x, temp= 1, n;
  std::cout << "Please insert the base " << std::endl;
  std::cin >> x;

  std::cout << "Please insert the exponent " << std::endl;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    temp = temp * x;
  }
  std::cout << temp << std::endl;
}