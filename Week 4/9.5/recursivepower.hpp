#include <iostream>

double mpow(double x, int n)
{
    if (n == 0)
    {
        return 1; // base case
    }
    else
    {
        return x * mpow(x, n - 1); // recursive call
    }
}

main()
{
    double x;
    int n;
    std::cout << "base" << std::endl;
    std::cin >> x;
    std::cout << "exponent" << std::endl;
    std::cin >> n;
    std::cout << mpow(x, n) << std::endl;
}