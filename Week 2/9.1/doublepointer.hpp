#include <iostream>
 
int main(){
    double a;
    double* pi; 
    // this declares pi as a pointer to int
    // which means that pi can be used to store the address
    // of a memory location of type int
 
    pi = &a;
 
    std::cout << &a << std::endl;
    std::cout << pi << std::endl;
 
    // the two values printed will be the same
    //0xbbe4fffa70
    //0xbbe4fffa70
}