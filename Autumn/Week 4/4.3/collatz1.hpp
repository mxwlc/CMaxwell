#include <iostream>
 
int main(){
  int n, i;
  std::cout << "Please input number " << std::endl;
  std::cin >> n;
  i = 0;
  while(n != 1){
    
    if(n % 2 == 0 ){
      n = n / 2;
    }
    
    else{
      n = 3*n + 1;
    }
    i++;
  }
  std::cout << "number of steps " << i;
}