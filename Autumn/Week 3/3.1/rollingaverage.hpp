#include <iostream>
 
int main(){
  double n, i = 1, sum = 0, avg = 0;
  

  std::cout << "Please insert a number " << std::endl;
  std::cin >> n;

 while (n!=0) {
   sum = sum + n;
   avg = sum / i;

   std::cout << "The current average is " << avg << std::endl;
   
   std::cout << "Please enter another number " << std::endl;
   std::cin >> n;
   i++;

 }
}