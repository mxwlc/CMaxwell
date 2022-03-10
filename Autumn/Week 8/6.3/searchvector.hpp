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

int main()
{

    int length, c, n, index;
    vector<int> vin;
    cout << "Insert the size of the vector" << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Please insert number " << (i + 1) << endl;
        cin >> c;
        vin.push_back(c);
    }

    cout << "Please enter number you wish to find " << endl;
    cin >> n ;
    index = search_vector(n, vin);

    cout << "The entry with the first instance of the element is index number " << index << endl;
}
