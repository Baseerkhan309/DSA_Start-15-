#include <iostream>
using namespace std;

// Pass By Reference //

void changeA(int *ptr){

    *ptr = 20;
    cout << *ptr << endl;
}
int main(){
   int a = 10;
   changeA(&a);

    return 0;
}