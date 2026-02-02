#include <iostream>
using namespace std;


int main(){
int n =5;
bool isPrime = true;

for(int i = 2; i <= n-1; i++){
   if(n % i == 0){
    isPrime = false;
   }
}

if(isPrime){
    cout <<n << " number is prime "<< endl;
}else{
    cout <<n << "number is nt Prime " << endl;
}
    return 0;
}