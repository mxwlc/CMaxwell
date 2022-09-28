#include <iostream>
 
// we can define a function that returns a bool
 
bool leap_year(int year){
    bool ly = false;
 
    // TODO: check whether the year is a leap year or not
    // store result in variable ly
    if( (year % 4) == 0){ 
 
    if( (year % 100) == 0){ 
      if((year % 400) == 0){
        ly = true;
      }
    }
    else{ 
      // if not multiple of 100
      // (but still multiple of 4)
      ly = true; 
    }
  }
  return ly;
  // we *do not print* anything in the function
}
 
int main(){
 
    int input_year;
 
    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;
 
    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 
 
    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}