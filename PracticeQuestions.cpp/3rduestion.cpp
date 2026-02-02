#include <iostream>
using namespace std;

int main(){
// Prime Nmber From 2 to N...//
int n = 15;
for(int i = 2; i <= n; i++){
    int curr = i;
    bool isPrime = true;

    for(int j = 2; j*j <= i; j++){
        if(curr % j == 0){
            isPrime = false;

        }
    }

    if(isPrime){
        cout << curr << " " ;
    }
}

cout << endl;
    return 0;

}