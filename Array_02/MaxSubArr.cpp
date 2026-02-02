#include <iostream>
using namespace std;

// Max Sub Array //
void MaxSubArr(int arr[], int n){
    int maxVal = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int maxSum = 0;
            for(int i= start; i<=end; i++){
          maxSum += arr[i];
          maxVal = max(maxVal,maxSum);

            }
            cout << maxSum << ",";
        }
        cout << endl;
         
    }
   
    cout << "The Maximum Value in array is =" << maxVal << endl;
}
int main(){
int arr[6] = {2,-3,6,-5,4,2};
int n =  sizeof(arr) /  sizeof(int);

MaxSubArr(arr,n);
    return 0;
}