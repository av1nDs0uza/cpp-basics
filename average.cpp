#include<iostream>
using namespace std;

int main(){
	int physics , chem ,math;
	cin >> physics;
	cin >>  chem;
	cin >>  math;

	float avg = (physics + chem + math)/3;
	cout <<"Average Marks" << avg;
	return 0; 
}