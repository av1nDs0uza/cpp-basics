#include <iostream>
using namespace std;


int main() {
    int N;
    int sum = 0;
    cin >> N;
    
    while(N!=0){
        sum = sum + N%10;
        N = N/10;
    }
    cout << sum;
    return 0;

       // write your code here
}