#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestElement(vector<int> arr) {
    
    int largest =0;
    
    //largest = *max_element(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
        
    }
    return largest;
    
     
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int largest = largestElement(arr);

    cout << largest;
    return 0;

}