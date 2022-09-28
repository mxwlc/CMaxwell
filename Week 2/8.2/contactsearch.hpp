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

int search_contact(const std::vector<contact> &contacts, std::string first_name, std::string surname)
{
    int index = -1;
    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].fname == first_name && contacts[i].sname == surname)
        {
            return i;
        }
    }
    return index;
}

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

    std::string fname, sname;
    std::cout << "Insert Forname " << std::endl;
    std::cin >> fname;
    std::cout << "Insert Surname " << std::endl;
    std::cin >> sname;

    int index = search_contact(v, fname, sname);
    if (index != -1)
    {
        contact result = v[index];
        std::cout << result.fname << " " << result.sname << " " << result.email << " " << result.phone << std::endl;
        return EXIT_SUCCESS;
    }
    else{
        std::cout << "Contact Not Found" << std::endl;
        return EXIT_SUCCESS;
    }
}
