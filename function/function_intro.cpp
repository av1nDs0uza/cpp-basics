#include<iostream>
using namespace std;

void playMusic(){
	cout << " Playing Music";
}
void sayHi(string name){
	cout <<"Hi " + name <<endl;

}


int main(){
	playMusic();
	sayHi("Avin");
	sayHi("DSA");

	return 0;
}