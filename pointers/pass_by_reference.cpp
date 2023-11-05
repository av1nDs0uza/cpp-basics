#include<iostream>
using namespace std;

void watchVideo(int * viewsPtr) {

	*viewsPtr = *viewsPtr +1;

}

int main(){
	int views = 100;
	watchVideo(&views);i

	cout << views <<endl;
	return 0;
}