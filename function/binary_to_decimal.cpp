#include<iostream>
using namespace std;

int Binary2Decimal (string binaryInteger){

	int p =1;
	int ans = 0;
	int N = stoi(binaryInteger);

	while(N!=0){
		int last_digit =N%10;
	    ans = ans + last_digit*p;
	    p = p*2;
	    N=N/10;
	}

	return ans;

}

int main(){
	string binaryInteger;
	cin >> binaryInteger;
	cout << Binary2Decimal(binaryInteger) << endl;

	return 0;

}