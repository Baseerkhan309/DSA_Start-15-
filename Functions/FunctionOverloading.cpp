#include <iostream>
using namespace std;

// Function Overloading //

int sum(int a, int b){
     cout << (a + b) << endl;
     return a + b;
}


double sum(double a, double b){
     cout << (a+b) << endl;
     return a + b;
}

int main(){
 sum(2,4);
 sum(1.2,3.4);

    return 0;
}