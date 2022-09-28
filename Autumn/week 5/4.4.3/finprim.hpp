// third version, still far from perfect 
// but at least more efficient
#include <iostream>
 
int main(){
 int n;
 bool found_factor = false;
 
  std::cout << "please enter an integer greater than 1" << std::endl;
  std::cin >> n;

  // "as soon as cf^2 is greater than n
  // then we know that cf has become greater than q"

 for(int cf = 2; (cf*cf <= n) && !found_factor; cf++){
    std::cout << "top of loop" << std::endl;
    std::cout << "cf: " << cf << std::endl;
    if( (n % cf) == 0){
        found_factor = true;
    }
    std::cout << "found factor: " << found_factor << std::endl;
    std::cout << "end of loop" << std::endl << std::endl;
  }
 
  if(found_factor){
      std::cout << "the number is not prime" << std::endl;
  }
  else{
      std::cout << "the number is prime" << std::endl;
  }
}

// please enter an integer greater than 1
// 15
// top of loop
// cf: 2
// found factor: 0
// end of loop

// top of loop
// cf: 3
// found factor: 1
// end of loop

// the number is not prime


//##############################################


// please enter an integer greater than 1
// 7
// top of loop
// cf: 2
// found factor: 0
// end of loop

// the number is prime