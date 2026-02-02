#include <iostream>
using namespace std;

// pointer //

int main(){

// Adress Of Ptr  and  *Ptr //

    int num = 12;
    int *ptr = &num;
    int *pptr = &*ptr;

    cout << ptr << endl;
    cout << pptr << endl;

   
    return 0;
}