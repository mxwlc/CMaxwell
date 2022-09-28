#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
int main()
{
    //loading files
    string inputfilename;
    cout << "enter name of input file" << endl;
    cin >> inputfilename;

    ifstream infile;
    infile.open(inputfilename);

    //did the file open
    if (!infile.is_open())
    {
        cout << "error opening input file" << endl;
        return EXIT_FAILURE;
    }

    string outputfilename;

    cout << "enter the name of the output file" << endl;

    cin >> outputfilename;

    ofstream outfile;
    outfile.open(outputfilename);

    //did the file open
    if (!outfile.is_open())
    {
        cout << "error opening output file" << endl;
        return EXIT_FAILURE;
    }


    //declare variables
    vector<int> v;
    int tmp;

    //reads from input
    while (infile >> tmp)
    {
        v.push_back(tmp);
    }

    infile.close();

    //prints to output
    for (int i = v.size(); i > 0; i--)
    {
        int temp = v[i - 1];
        outfile << temp << endl;
    }
    cout << "Done" << endl;

    outfile.close();
}