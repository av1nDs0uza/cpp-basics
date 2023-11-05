#include<iostream>
using namespace std;


bool isPrimeOptimised(int n){
	for(int i=2; i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
} 

int main(){
	int n; 
	cin >> n;

	cout << (isPrimeOptimised(n) ? "Prime" : "Non-Prime");

	return 0;
}