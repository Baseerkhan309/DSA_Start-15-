#include <iostream>
using namespace std;



int main(){
//...Armstrong Number...//

int n = 371;
int num = n;
int cubeSum = 0;

while(num > 0){
    int lastDigit = num % 10;
    cubeSum += lastDigit * lastDigit * lastDigit;
    num /= 10;
}

if ( n == cubeSum){
    cout << "Yes The Number Is Armstrong..." << endl;

}else{
    cout << "The Number Is Not Armstrong..." << endl;
}

    return 0;
}