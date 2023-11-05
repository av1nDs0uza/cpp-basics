#include<iostream>
using namespace std;

int main(){
	int x=10;
	cout << &x << endl;

	// demo pointer

	int *xptr = &x;

	cout << xptr;

	return 0;
}