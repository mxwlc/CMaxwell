#include <iostream>
#include <vector>
using namespace std;

int search_vector(int n, const vector<int> &vin)
{
    int index = -1;
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] == n)
        {
            index = i;
            break;
        }
    }
    return index;
}

void union_vector(const std::vector<int> &vin1, const std::vector<int> &vin2, std::vector<int> &vout)
{
    int current, there;

    vout = vin1;
    for (int i = 0; i < vin2.size(); i++)
    {
        current = vin2[i];
        there = search_vector(current, vin1);
        if (there == -1) // not there
        {
            vout.push_back(current);
        }
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

    union_vector(vin1, vin2, vout);

    for (int i = 0; i < vout.size(); i++)
    {
        cout << vout[i] << endl;
    }
}