#include <iostream>
using namespace std;

// Convert Number From Binary To Decimal ..
void binToDec(int n){
    int num = n;
    int decNum = 0;
    int power  = 1;

    while(n > 0)
{
     int lastDig = n % 10;
     decNum += lastDig * power;
     power *=2;
     n /=10;
}
cout << decNum;
}

int main(){

    binToDec(100);
    return 0;
}