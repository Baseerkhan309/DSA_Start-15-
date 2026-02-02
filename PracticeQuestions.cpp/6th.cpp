#include <iostream> 
using namespace std;

// Sum of Digits Of Numbers  //

int numberSum(int n){
 int sum =0;
    while(n > 0){

    int lastDigit = n % 10;
    sum +=lastDigit;
    n = n / 10 ; 
}
return sum;
}

int main(){
    
    cout << numberSum(123);
    
    
    return 0;


}