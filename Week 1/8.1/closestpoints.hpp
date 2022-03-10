#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

struct Point
{
    double x;
    double y;
};

double distance_points(Point p1, Point p2)
{
    return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}

std::string point_to_s(Point p)
{
    return "(" + std::to_string(p.x) + ", " + std::to_string(p.y) + ")";
}

// idxp1 and idxp2 are output parameters
// after the function call they will contain
// the indices of the two closest points in vp
// if vp contains two points or more
// (otherwise they will just contain uninitialised values)

void closest_points(const std::vector<Point> &vp, int &idxp1, int &idxp2)
{
    // TODO:
    // complete this function
    // (make use of function distance_points)
    double closestdist = 1.7976931348623158e+308; //largest double in c++: DBL_MAX
    double current;
    for (int i = 0; i < vp.size(); i++)
    {
        for (int j = 0; j < vp.size(); j++)
        {
            current = distance_points(vp[i], vp[j]);
            if (current != 0 && current < closestdist)
            {
                idxp1 = i, idxp2 = j;
                closestdist = current;
            }
        }
    }
}

int main()
{

    // TODO:
    // read the points from the file
    // and store them in vector points
    std::ifstream infile;
    infile.open("points.txt");

    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }

    std::vector<Point> points;
    Point tmp;
    while (infile >> tmp.x >> tmp.y)
    {
        points.push_back(tmp);
    }

    infile.close();

    if (points.size() == 0)
    {
        std::cout << "there are no points in the file" << std::endl;
    }
    else if (points.size() == 1)
    {
        std::cout << "there is only one point in the file" << std::endl;
    }
    else
    {
        int idxp1, idxp2;
        closest_points(points, idxp1, idxp2);

        // TODO:
        // print the two points
        std::cout << "The closest points are " << point_to_s(points[idxp1]) << " and " << point_to_s(points[idxp2]) << std::endl;
    }
}
