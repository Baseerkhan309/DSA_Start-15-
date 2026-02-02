#include <iostream>
using namespace std;

// Trapping Rain Water //
void trapWater(int arr[], int n){
    int leftMax[200000],rightMax[200000];
    leftMax[0] = arr[0];
    rightMax[n-1] = arr[n-1];

  for(int i=1; i<n; i++){
    leftMax[i] = max(leftMax[i-1],arr[i-1]);
     
  }
 
  for(int i=n-2; i>=0; i--){
    rightMax[i] = max(rightMax[i+1],arr[i+1]);
     
  }

  int waterTrapped = 0;
  for(int i=0; i<n; i++){
     int currWater = min(leftMax[i],rightMax[i]) - arr[i];
     
    if(currWater > 0){     
    waterTrapped += currWater;
    }
    
  }
  cout << "Water Trapped = " <<  waterTrapped;
  
}
int main(){
int arr[7] = {4,2,0,6,3,2,5};
int n = sizeof(arr) / sizeof(int);

trapWater(arr,n);



    return 0;
}