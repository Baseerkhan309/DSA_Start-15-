#include <iostream>
using namespace std;

// Max Sub Array Optimization //
void printArr(int arr[],int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){ 
        for(int k=i; k<n; k++){
         currSum +=arr[k];
         maxSum = max(maxSum,currSum);
        }
    }
    cout<< "max array is =" << maxSum << endl;
}
int main(){
int arr[] = {2,-3,6,-5,4,2};
int n = sizeof(arr) / sizeof(int);

printArr(arr,n);
    return 0;
}