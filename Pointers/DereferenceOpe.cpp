#include <iostream>
using namespace std;

// De-Reference Operator //


int main(){
  int a = 10;
  int *ptr = &a;

  cout << &a << endl;
  cout << *&a << endl;
  cout << *ptr << endl;


    return 0;
}