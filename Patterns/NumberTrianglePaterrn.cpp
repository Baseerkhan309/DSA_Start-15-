#include <iostream>
using namespace std;

int main(){
//  0_1 Triangle Pattern  //
bool value = true ;
int n = 5;
for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        cout << value << " ";
        value = !value;
    }
    cout << "\n";
}

    return 0;
}