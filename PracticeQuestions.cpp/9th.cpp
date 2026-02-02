#include <iostream>
using namespace std;

// Find Largest Of 3 Number //
void largestOfNumber(int a, int b, int c){

 if(a >= b && a >= c){
    cout << a << endl;
 }else 
 if(b >=a && b >= c){
    cout << b << endl;
 }else{
      cout << c << endl;
 }
 
}

int main(){
    
 largestOfNumber(-2,-4,-6);
 
    return 0;
}