#include <iostream>
using namespace std;

// Sum Of Number In Second Row 

int main(){
int arr[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
int n = 3;
int m = 3;
int sum = 0;

for(int i=0; i<n; i++){
   sum += arr[i][1];
}
cout << sum << " ";

    return 0;
}