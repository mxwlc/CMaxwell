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
// 11
// top of loop
// cf: 2
// found_factor: 0
// bottom of loop

// top of loop
// cf: 3
// found_factor: 0
// bottom of loop

// top of loop
// cf: 4
// found_factor: 0
// bottom of loop

// top of loop
// cf: 5
// found_factor: 0
// bottom of loop

// top of loop
// cf: 6
// found_factor: 0
// bottom of loop

// top of loop
// cf: 7
// found_factor: 0
// bottom of loop

// top of loop
// cf: 8
// found_factor: 0
// bottom of loop

// top of loop
// cf: 9
// found_factor: 0
// bottom of loop

// top of loop
// cf: 10
// found_factor: 0
// bottom of loop

// the number is prime
