#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr={1,2,10,12,15};

	// Size of vector

	cout<<arr.size() << endl;

	// Capacity of the vector
	cout << arr.capacity() <<endl;

	return 0;
}