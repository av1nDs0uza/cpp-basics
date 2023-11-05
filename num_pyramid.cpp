#include<iostream>
using namespace std;
  
  int main(){
  	int n;
  	cin>> n;
  
  //
  for (int i = 1;i<=n;i++){
  	// spaces
  	for (int cnt=1;cnt<=n-i;cnt++){
  		cout<< " ";

  	}
  	//inc
  	int val=i;
  	for (int cnt=1;cnt <=i;cnt++){
  		cout << val;
  		val++;
  	}
  	//dec
  	val=val-2;
  	for (int cnt=1;cnt <=i-1;cnt++){
  		cout << val;
  		val--;
  	}
  	//new line
  	cout << endl;

  }
  return 0;
}


