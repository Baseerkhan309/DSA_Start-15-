#include <iostream>
using namespace std;

int main(){
// smallest Array //

int arr[5] = {5,6,2,7,4};
int n = sizeof(arr) / sizeof(int) ;
int min = arr[0];

for(int i=0; i<n; i++){
    if(arr[i]<min){
        min = arr[i];
    }
}

cout << "largest =" << min << endl;



    return 0;
}