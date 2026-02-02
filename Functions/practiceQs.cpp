#include <iostream>
using namespace std;

// Function that return prime number from 2 to n //

bool  isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2; i<=n-1; i++){
        if(n % i == 0){
     return false;
        }
    }
    return true;
}

void allPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
           cout << i << " ";
        }
    }
}
int main(){
  allPrime(4);

    return 0;
}