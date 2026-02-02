#include <iostream>
using namespace std;

int main(){

    //.........Sum Of Digits Of a Number.........//
   // int sum = 0;
    int n = 10829;
  
    while(n > 0 ){
    int lastDigit = n % 10;
     cout << lastDigit; 
    // sum += lastDigit;
     n = n/10;
   
    }
    
    cout << endl;

    return 0;
}