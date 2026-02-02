#include <iostream>
using namespace std;

// Print number of all 7's that are in the 2D Array ..

int main(){
   int arr[2][3] = {{4,7,8},{8,8,7}};
   int n = 2;
   int m = 3;
   int target = 7;
   int count = 0;


   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(arr[i][j] == target){
           count++;
         }
      }
   }

          cout << "Count of 7s is =" << count << endl;
    return 0;
}