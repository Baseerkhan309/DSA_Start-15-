#include <iostream>
using namespace std;

 // Pointer Of Pointer //

int main(){
 int a = 10;
 int *ptr = &a;

 int **pptr = &ptr;
 cout << &ptr << "=" << pptr << "\n";

    return 0;
}