#include <iostream>
#include <vector>
using namespace std;

void filter_v(const vector<double> &vin, double t, vector<double> &vout)
{
    double current, length;
    length = vin.size();

    for (int i = 0; i < length; i++)
    {
        current = vin[i];
        if (current < t)
        {
            vout.push_back(current);
        }
    }
}

int main()
{
    int length;
    double current, t;
    vector<double> vin;
    vector<double> vout;

    cout << "How many numbers do you want to input" << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Please insert number " << (i + 1) << endl;
        cin >> current;
        vin.push_back(current);
    }
    cout << "Enter the value of t" << endl;
    cin >> t;

    filter_v(vin, t, vout);

    cout << "The filtered vector is: " << endl;

    for (int i = 0; i < vout.size(); i++)
    {
        cout << vout[i] << endl;
    }
}