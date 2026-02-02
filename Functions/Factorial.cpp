#include <iostream>
using namespace std;

int factorialNum(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
        
    }
    return fact;
}

int main(){
// Factorial Of Number //
int result = factorialNum(5);
cout <<"Factorial Of Number Is = " << result << endl;
return 0;
}