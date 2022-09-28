#include <iostream>
 
int myfactorial(int n){
// in is not a special name
// just a name
 
    int fact = n;
    if(n==0){
      return 1;
    }
    else{
      // variable that will store the result
      for(int i = 1; i < n; i++){
        // TODO: compute the factorial of in
        // so that the result is stored in variable fact
        fact = fact * (n-i);
      }
    }
 
 
    return fact;
    // return the result
    // we *do not print* anything in the function
}
 
 // 3! = 3* 2 * 1
int my_recur_factorial(int n){
// in is not a special name
// just a name    
    if(n<=1){
      return 1;
    }
    else{
      // n = n-1;
      // fact = fact * (n);
      // return my_recur_factorial(n) * my_recur_factorial(n-1);
      return n * my_recur_factorial(n-1);
      // 3 * func(2)
      //  2 * func(1)
      //    2 * 1 
    }

}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
    std::cout << "factorial using recursion of " << n << ": " << my_recur_factorial(n) << std::endl;

}