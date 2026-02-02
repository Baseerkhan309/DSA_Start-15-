#include <iostream>
using namespace std;

// Transpose Of Matrix 

int main(){
int arr[2][3] = {{11,12,13},{21,22,23}};
int n = 2;
int m = 3;

   for(int j=0; j<m; j++){
   for(int i=0; i<n; i++){
        //swap(arr[j],arr[i]);
         cout << arr[i][j] << " ";

    }
    cout << endl;
   
}

    return 0;
}