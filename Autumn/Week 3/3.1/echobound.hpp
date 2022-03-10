#include <iostream>
 
int main(){
    int n;
 
    std::cin >> n;
 
    while((-11 < n ) && ( 11 > n)){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}