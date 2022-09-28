#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
 
int main(){
    ifstream infile; 
    infile.open("input.txt");
 
    vector<int> v;
 
    if(!infile.is_open()){ 
        cout << "error opening file" << endl;
        return EXIT_FAILURE;
    }
 
    int tmp;
 
    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }
 
    infile.close(); 
  
    for(int i = v.size(); i > 0; i--){
        cout << v[i-1] << endl;
    }
 
}