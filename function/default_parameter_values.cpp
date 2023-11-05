#include<iostream>
using namespace std;

void playMusic(int songId){
	cout << " Playing Music"<<songId<<endl;
}
void sayHi(string name){
	cout <<"Hi " + name <<endl;

}


int main(){
	playMusic(5);
	sayHi("Avin");
	sayHi("DSA");

	return 0;
}