#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerBound(vector<int>A , int Val) {
    
    int lowerBound = INT_MIN; // Initialize to the lowest possible value
    
    for (int i = 0; i < A.size(); i++) {
        if (A[i] <= Val && A[i] > lowerBound) {
            lowerBound = A[i];
        }
    }
    
    return lowerBound;
    
     
}

int main(){
    vector<int> A = {1,2,3,4,5,6};
    int Val = 4;
    int lowerBoundValue = lowerBound(A, Val);

    cout << lowerBoundValue;
    return 0;

}