#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>

struct complex
{
    double real;
    double imaginary;
};

void quadsolve(double a, double b, double c, complex &x1, complex &x2)
{

    double delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        x1.real = (-b) / (2 * a);
        x1.imaginary = sqrt(abs(delta)) / (2 * a);
        x2.real = -b / (2 * a);
        x2.imaginary = -sqrt(abs(delta)) / (2 * a);
    }
    else
    {

        x1.real = (-b + std::sqrt(delta)) / (2 * a);
        x1.imaginary = 0;
        x2.real = (-b - std::sqrt(delta)) / (2 * a);
        x2.imaginary = 0;
        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. pow(delta, 0.5)
    }
}

int main()
{

    double a, b, c;
    // coincidentally named like those in the function

    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;

    std::cin >> a >> b >> c;

    complex s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output
    // by the function

    quadsolve(a, b, c, s1, s2);
    std::cout << "the solutions are:" << std::endl;
    std::cout << s1.real << " + " << s1.imaginary << "i" << std::endl;
    std::cout << s2.real << " + " << s2.imaginary << "i" << std::endl;
}