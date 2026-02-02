#include <iostream>
using namespace std;

// Kadan's Algorithm //
int currSum = 0;
int maxSum = INT_MIN;
void maxSubArrSum(int arr[], int n){
    
    for(int i=0; i<n; i++){
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
    if(currSum < 0){
        currSum = 0;
    }
    }
    cout << "Max Sub Arr Sum =" << maxSum << endl;
}


int main(){
int arr[] = {2,-3,6,-5,4,2};
int n = sizeof(arr) / sizeof(int);

maxSubArrSum(arr,n);


    return 0;
}