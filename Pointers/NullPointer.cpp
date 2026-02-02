#include <iostream> 
using namespace std;

// Null Pointer Cant be executed ( De-Refference )

int main(){
 int *ptr = NULL;

 cout << ptr << endl;
 // cout << *ptr << endl; .......... We Cant de-reference it  it will give error sometime //

    return 0;
}