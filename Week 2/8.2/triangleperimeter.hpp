#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

double distance_points(Point p1, Point p2)
{
    return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}

std::string point_to_s(Point p)
{
    return "(" + std::to_string(p.x) + ", " + std::to_string(p.y) + ")";
}

double triangle_perimeter(Triangle t)
{
    Point a = t.a, b = t.b, c = t.c;
    double ab, bc, ca;
    ab = distance_points(a, b);
    bc = distance_points(b, c);
    ca = distance_points(a, c);

    return ab + bc + ca;
}

int main()
{
    Triangle t;
    Point a, b, c;
    a.x = 0, a.y = 0;
    b.x = 0, b.y = 1;
    c.x = 1, c.y = 0;

    t.a = a, t.b = b, t.c = c;

    std::cout << triangle_perimeter(t) << std::endl;
}