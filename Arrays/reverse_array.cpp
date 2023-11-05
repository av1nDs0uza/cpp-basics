#include<iostream>
using namespace std;

void print(int * myArray, int n){
	for(int i=0;i<n;i++){
		cout << myArray[i] << " ";
	}
	cout << endl;
}

void reverse(int *arr, int n){
	for(int i=n-1; i>=0;i--){
		cout << arr[i]<< ",";
	}

	cout << endl;

	for (int i=0;i<n;i++){
		cout << arr[n-1 -i] << endl;
	}
	cout <<endl;

}

void reverseArrayInPlace(int *arr, int n){
	int s=0;
	int e=n-1;

	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}

int main(){
	int n;
	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	// reverse(arr,n);
	reverseArrayInPlace(arr,n);
	print(arr,n);


	return 0;
}