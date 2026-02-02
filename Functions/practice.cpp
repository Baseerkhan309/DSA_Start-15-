#include <iostream>
using namespace std;

bool Prime(int n){
    bool isPrime = true;

    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
             return false;
        }
        
        }
        return true;
        
    }
    




int main(){
//  Check Where a number is prime or not //

cout << Prime(11) << endl;


    return 0;
}