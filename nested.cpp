#include<iostream>
using namespace std;

int main(){
	int R,C;
	cin >> R >> C;
	int val =1;

	for(int i=0;i<R;i++){
		for(int j = 0;j<C;j++){
			cout << val;
			val = val+1;

		}
		cout << endl;
	}
	return 0;
}