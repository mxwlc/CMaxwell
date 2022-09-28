#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

struct contact
{
    std::string fname;
    std::string sname;
    std::string email;
    std::string phone;
};

int main()
{
    std::ifstream infile;
    infile.open("input.txt");

    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }

    std::vector<contact> v;
    contact tmp;
    while (infile >> tmp.fname >> tmp.sname >> tmp.email >> tmp.phone)
    {
        v.push_back(tmp);
    }
    contact current;
    for (int i = 0; i < v.size(); i++)
    {
        current = v[i];
        std::cout << current.fname << " " << current.sname << " " << current.email << " " << current.phone << std::endl;
    }
}
