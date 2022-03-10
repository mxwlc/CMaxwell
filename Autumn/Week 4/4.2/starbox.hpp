#include <iostream>
 
int main(){
  int n;
  std::cin >> n;
   
  int j = 0;
  int i = 0;
    
  // n times we draw one row
  // note that we need a different variable
  // for the loop counter
   
  while(i < n){
 
    // the following loop draws one row
     
    while(j < n){
      std::cout << "*"; 
        // there is no << std::endl
        // because we want them on the same row
        j++;
      }
    j=0;
    i++;
    std::cout << std::endl;
    // we go on a newline after each row
 
    }
 
}