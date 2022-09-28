#include <iostream>

void myswap(std::string& a, std::string& b){
  std::string temp;

  temp = a;
  a = b;
  b = temp;

}

int main(){
  std::string n1, n2;

  std::cout << "Please insert 2 strings" << std::endl;
  std::cin >> n1 >> n2;

  std::cout << "You entered" << std::endl;
  std::cout << "n1: " << n1 << std::endl;
  std::cout << "n2: " << n2 << std::endl;

  myswap(n1,n2);

  std::cout << "After swapping values" << std::endl;
  std::cout << "n1: " << n1 << std::endl;
  std::cout << "n2: " << n2 << std::endl;
}