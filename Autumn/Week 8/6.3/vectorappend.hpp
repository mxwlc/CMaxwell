#include <iostream>
#include <vector>
using namespace std;

void append_vectors(const std::vector<int> &vin1, const std::vector<int> &vin2, std::vector<int> &vout)
{
    for (int i = 0; i < size(vin1); i++)
    {
        vout.push_back(vin1[i]);
    }
    for (int j = 0; j < size(vin2); j++)
    {
        vout.push_back(vin2[j]);
    }
}

int main()
{
    int s1, s2, current;
    vector<int> vin1;
    vector<int> vin2;
    vector<int> vout;

    cout << "enter the size of vector 1" << endl;
    cin >> s1;
    cout << "enter the size of vector 2" << endl;
    cin >> s2;

    cout << "Vector 1: " << endl;
    for (int i = 0; i < s1; i++)
    {
        cout << "Please insert entry number " << i << endl;
        cin >> current;
        vin1.push_back(current);
    }
    cout << "Vector 2: " << endl;
    for (int j = 0; j < s2; j++)
    {
        cout << "Please insert entry number " << j << endl;
        cin >> current;
        vin2.push_back(current);
    }

    append_vectors(vin1, vin2, vout);

    for (int i = 0; i < vout.size(); i++)
    {
        cout << vout[i];
    }
}