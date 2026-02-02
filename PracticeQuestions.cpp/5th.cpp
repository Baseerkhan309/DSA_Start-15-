#include <iostream>
using namespace std;

// Check if a Number is Palindrom or not //
int reverse(int n){
    int res  = 0;
    while(n > 0){
        int lastdigit = n % 10;
        res =res * 10 + lastdigit;
        n = n / 10;

    }
    return res;
}

bool isPalindrome(int n){
    if(n < 2){
        return false;
    }
    int revnum = reverse(n);
    return n == revnum;
}
int main(){

 cout <<  isPalindrome(121);


    return 0;
}