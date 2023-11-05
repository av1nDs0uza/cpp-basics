#include<iostream>
using namespace std;

int main(){
	int largest_sum=0;

	int arr[] ={-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	for(int i =0; i<n;i++){
		for(int j =i;j<n;j++){
			// cout << "i " << i << " - "<<"j "<<j <<endl;
			int subarraySum = 0;
			for(int k =i;k<=j;k++){
				subarraySum += arr[k];
			}
			largest_sum = max(largest_sum,subarraySum);

		}
		
	}
	cout << largest_sum;
	return 0;
}