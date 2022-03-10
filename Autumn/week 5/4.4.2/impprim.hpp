// second version, still not very efficient
#include <iostream>
 
int main(){
    int n;
    bool found_factor = false;
 
    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;
 
    // we add a condition in the loop
    // using the boolean and
 
    for(int cf = 2; (cf < n) && !found_factor; cf++){
      std::cout <<  "Top of the loop" << std::endl;
      std::cout << "cf: " << cf << std::endl;
        if( (n % cf) == 0){
            found_factor = true;
        }
        std::cout << "found factor = " << found_factor << std::endl;
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
// Top of the loop
// cf: 2
// found factor = 0
// end of loop

// Top of the loop
// cf: 3
// found factor = 1
// end of loop

// the number is not prime

//####################################

// please enter an integer greater than 1
// 7
// Top of the loop
// cf: 2
// found factor = 0
// end of loop

// Top of the loop
// cf: 3
// found factor = 0
// end of loop

// Top of the loop
// cf: 4
// found factor = 0
// end of loop

// Top of the loop
// cf: 5
// found factor = 0
// end of loop

// Top of the loop
// cf: 6
// found factor = 0
// end of loop

// the number is prime