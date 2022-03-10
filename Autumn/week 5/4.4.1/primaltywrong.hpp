#include <iostream>
 
int main(){
    int n;
    bool found_factor = false;
 
    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;
 
    for(int cf = 2; cf < n; cf++){
        std::cout << "top of loop" << std::endl;
        std::cout << "cf: " << cf << std::endl;
        std::cout << "found_factor: " << found_factor << std::endl;
 
        if( (n % cf) == 0){
            std::cout << "entering the conditional" << std::endl;
            found_factor = true;
            std::cout << "found_factor set to: " << found_factor << std::endl;
        }
        else{
          std::cout << "entering the else";
          found_factor = false;
          //wrong because for later iteration the variable found_factor is false even if it was true before
         }
        std::cout << "bottom of loop" << std::endl << std::endl;
        // two newlines to separate each loop execution clearly
    }
 
    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}

// please enter an integer greater than 1
// 8
// top of loop
// cf: 2
// found_factor: 0
// entering the conditional
// found_factor set to: 1
// bottom of loop

// top of loop
// cf: 3
// found_factor: 1
// entering the elsebottom of loop

// top of loop
// cf: 4
// found_factor: 0
// entering the conditional
// found_factor set to: 1
// bottom of loop

// top of loop
// cf: 5
// found_factor: 1
// entering the elsebottom of loop

// top of loop
// cf: 6
// found_factor: 0
// entering the elsebottom of loop

// top of loop
// cf: 7
// found_factor: 0
// entering the elsebottom of loop

// the number is prime


//########################################

// please enter an integer greater than 1
// 4
// top of loop
// cf: 2
// found_factor: 0
// entering the conditional
// found_factor set to: 1
// bottom of loop

// top of loop
// cf: 3
// found_factor: 1
// entering the elsebottom of loop

// the number is prime