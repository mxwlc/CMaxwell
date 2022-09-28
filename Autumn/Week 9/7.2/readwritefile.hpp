#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main()
{
    std::ifstream infile;
    infile.open("input.txt");

    std::ofstream outfile;
    outfile.open("output.txt");

    std::vector<int> v;

    if (!infile.is_open())
    {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while (infile >> tmp)
    {
        v.push_back(tmp);
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close();

    // TODO: print the content of v in reversed order
    // onto a different text file
    for (int i = v.size(); i > 0; i--)
    {
        int temp = v[i - 1];
        outfile << temp << std::endl;
    }
    
    outfile.close();
}