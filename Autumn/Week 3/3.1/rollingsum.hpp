#include <iostream>
 
int main(){
  int n, sum = 0;

  std::cout << "Please insert a number " << std::endl;
  std::cin >> n;

  while (n != 0){
    sum = sum + n;
    std::cout << "The current sum is " << sum << std::endl;
    std::cout << "Please insert a number " << std::endl;
    std::cin >> n;
  }
}