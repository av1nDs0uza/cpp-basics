#include<iostream>
using namespace std;

void printArray(int arr[]){

	cout <<" In Function"<<sizeof(arr)<<endl;

}

int main(){
	int arr[]= {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);

	cout <<" In main"<<sizeof(arr)<<endl;

	return 0;
}