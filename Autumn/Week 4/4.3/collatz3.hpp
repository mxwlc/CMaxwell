#include <iostream>
 
int main(){
  // defining variables
  int n1, n2, n, i = 0, curmax;
  
  //input bounds
  std::cout << "Please input lower bound " << std::endl;
  std::cin >> n1;
  
  std::cout << "Please input upper bound " << std::endl;
  std::cin >> n2;

  // max
  for(int j = n1; j <= n2; j++){
    n = j;
    i = 0;
    curmax= n;

    std::cout << "Current number: " << j << std::endl;

    while(n != 1){
    
      // collatz conjecture
      if(n % 2 == 0 ){
        n = n / 2;
      }
    
      else{
        n = 3*n + 1;
      }
    
      // running max
      if(n > curmax){
        curmax = n;
      }
    
      // ticks up counter
     i++;
    }
  
    // prints results
    std::cout << "number of steps " << i << std::endl;
    std::cout << "max " << curmax << std::endl;
  } 
}
