#include <iostream>
using namespace std;

 // Binary Search //
int binSearch(int arr[], int n, int key){
   int st = 0;
   int end = n-1;

   while(st <= end){
    int mid = (st + end) / 2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] < key){
        st = mid + 1;

    }else{
        end = mid - 1;

    }
   }
   return -1;
}


int main(){

int arr[] = {2,4,6,10,12,8,16};
int n = sizeof(arr) / sizeof(int);

cout << binSearch(arr,n,6);

    return 0;
}