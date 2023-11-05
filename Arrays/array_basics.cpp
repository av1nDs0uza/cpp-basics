#include<iostream>
using namespace std;

int main(){
	int n ;
	cin >> n;



	int arr[100];

	// cout << arr[0]<< endl;
	// cout << arr[1] << endl;

	// int n = sizeof(arr)/sizeof(int);
	// cout << n << endl;
	cout << sizeof(arr)/ sizeof(int) << endl;

	// User INput
	
	for(int i=0;i<n;i++){
		cin >> arr[i];

	}
	

	// Print all the elements of the array
	for(int i = 0; i<=n-1; i++){
		cout << arr[i] << ",";
	}
	cout << endl;

	return 0;
}