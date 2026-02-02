#include <iostream>
using namespace std;

void func(int *arr){
   cout << sizeof(arr);
}
int main(){
// Array By Reference //

int a = 5;
int *ptr = &a;

  //cout << ptr << endl;

int arr[5] = {4,3,5,6,7};
int n = sizeof(arr) / sizeof(int);

//cout << arr << endl;

func(arr);

//cout << arr[0] << endl;



    return 0;
}