#include <iostream>
#include <vector>
using namespace std;

int min_vector_element(const std::vector<double> &vin)
{
    double smallest;
    int index;
    smallest = vin[0];

    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] < smallest)
        {
            smallest = vin[i];
        }
    }

    for (int i = 0; i < vin.size(); i++)
    {
        if( vin[i] == smallest){
            return i;
            break;
        }
    }
}

int main(){
    int length, smallest;
    double current;
    vector<double> vin;

    cout << "Please insert the length of the vector " << endl;
    cin >> length;

    for(int i = 0; i < length; i++)
    {
        cout << "Insert number " << (i+1) << endl;
        cin >> current;
        vin.push_back(current);
    }

    smallest = min_vector_element(vin);
    cout << "The smallest element has index " << smallest << " and value " << vin[smallest] << endl;
}