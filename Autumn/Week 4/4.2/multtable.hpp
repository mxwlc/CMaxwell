#include <iostream>
 
int main(){
  int n, p;
  std::cin >> n;

  for(int i =1; i<(n+1); i++){
    
    for(int j=1; j<(n+1); j++){
      p=i*j;
      std::cout << p << "\t";
    }
  
  std::cout << std::endl;
  }
}