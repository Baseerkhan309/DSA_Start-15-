#include <iostream>
using namespace  std;

// Finding Odd-OR-Even //

bool EvenOdd(int a){
    
if(a % 2 == 0){
    return true;
}else{
    return false;
}

}

int main(){
    cout << boolalpha;
    cout << " Your Value Is " << EvenOdd(12) << endl ;
    return 0;
}