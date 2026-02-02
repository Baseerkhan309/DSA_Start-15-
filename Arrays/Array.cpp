#include <iostream>
using namespace std;

int main(){
// Array In For Loop //
int n;
cout << "please enter length of  array ";
cin >> n ;
int arr[n];

// int arr[5] = {1,2,3,4,5};
// int n = sizeof(arr) / sizeof(int);

// cin //
for(int i=0; i<n; i++){
    cin >> arr[i] ; 
}


// cout //
for(int i=0; i<n; i++){
    cout << arr[i] << "," ; 
}
    cout << endl;


    return 0;
}