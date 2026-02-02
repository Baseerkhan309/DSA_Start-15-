#include <iostream>
#include <cstring>
using namespace std;

// Valid Palindrom 
bool isValidPalindrom(char ch[], int n){
    int st = 0;
    int end = n-1;
    while(st < end){
        if(ch[st++] != ch[end--]){
            cout << "not Valid Palindrom";
            return false;
        }
        //  st ++;
        //   end --;
    }
    cout << "Valid Palindrome";
    return true;
}



int main(){
char ch[] = "madam";
 isValidPalindrom(ch , strlen(ch));

    return 0;
}