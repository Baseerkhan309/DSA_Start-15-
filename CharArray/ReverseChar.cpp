#include <iostream>
#include <cstring>
using namespace std;

// Reverse Char Array 
void reverseArr(char ch[], int n){
    int st = 0;
    int end  = n-1;
    while(st < end){
     swap(ch[st], ch[end]);
        st ++;
        end --;
    }
}

int main(){
char ch[] = "code";
  reverseArr(ch,strlen(ch));
  cout << ch << endl;
    
    return 0;
}