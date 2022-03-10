#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> number, lessthan;
	int n, t;

	cout << "How many numbers do you want to input?" << endl;
	cin >> n;
	for(int i=0; i < n; i++){
		int c = 0;
		cout << "please insert number " << (i + 1) << endl;
		cin >> c;
		number.push_back(c);
	}
	cout << "please enter the number you wish to search for numbers less than." << endl;
	cin >> t;
	for(int j=0; j < number.size(); j++){
		int current;
		current = number[j];
		if(current<t){
			lessthan.push_back(current);
		}
		

	}
	for(int k = 0; k < lessthan.size(); k++){
		cout << lessthan[k] << endl;
	}

}