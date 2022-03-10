#include <iostream>
#include <cmath>
 
int main(){
  int x, n, sum=0, current=0;
  std::cout << "Please insert the base" << std::endl;
  std::cin >> x;
  std::cout << "Please insert the highest power you want to sum to" << std::endl;
  std::cin >> n;

  for (int i= 0; i <= n; i++){
    current = std::pow(x, i);
    sum = sum + current;
  }
  std::cout << sum;
}   