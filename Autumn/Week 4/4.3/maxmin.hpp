#include <iostream>
 
int main(){
    int n, curmax, curmin;
 
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
 
    curmax = n;
    curmin = n;
    // initially the current maximum and minimum is 
    // the first number entered
 
    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "miminum so far: " << curmin << std::endl;
    while(n != 0){
 
        std::cout << "please enter number:" << std::endl;
        std::cin >> n;
 
        // if the current number is greater than the current max...
        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }
        // if the current number is less than the current min...
        if (n < curmin){
          curmin = n;
          // ...we update the current min
        }
 
        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
        // we print the current maximum and maximum in any case 
        // whether or not it was updated in this iteration of the loop
    }
 
}