#include<iostream>
using namespace std;

void applyTax(int income){
	float tax =0.10;

	income = (1-tax)*income;
}



int main(){
	int income;
	cin>> income;
	applyTax(income);
	cout << income <<endl;

}