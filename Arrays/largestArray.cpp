#include <iostream>
using namespace std;

int main(){
// Largest Array //

int arr[5] = {5,6,2,7,4};
int n = sizeof(arr) / sizeof(int) ;
int max = arr[0];

for(int i=0; i<n; i++){
    if(arr[i]>max){
        max = arr[i];
    }
}

cout << "largest =" << max << endl;



    return 0;
}