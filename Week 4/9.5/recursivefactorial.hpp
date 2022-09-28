#include <iostream>

int recursivefactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursivefactorial(n - 1);
    }
}

main(){
    std::cout << recursivefactorial(3);
}