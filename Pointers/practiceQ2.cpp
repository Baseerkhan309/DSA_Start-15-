#include <iostream>
using namespace std;

void multipleBy2(int &x, int &y, int &z){
    x *= 2;
    y *= 2;
    z *= 2;
    
}

int main(){

int x = 1;
int y = 2;
int z = 3;

multipleBy2(x,y,z);
cout << x << y << z << endl;


    return 0;
}