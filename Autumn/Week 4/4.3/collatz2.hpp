#include <iostream>
 
int main(){
  // defining variables
  int n, i = 0, curmax;
  
  //input number
  std::cout << "Please input number " << std::endl;
  std::cin >> n;
  
  //max
  curmax= n;
  
  while(n != 1){
    
    //collatz conjecture
    if(n % 2 == 0 ){
      n = n / 2;
    }
    
    else{
      n = 3*n + 1;
    }
    
    //running max
    if(n > curmax){
      curmax = n;
    }
    
    //ticks up counter
    i++;
  }
  
  //prints results
  std::cout << "number of steps " << i << std::endl;
  std::cout << "max " << curmax << std::endl;
}