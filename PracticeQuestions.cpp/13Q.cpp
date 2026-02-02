#include <iostream>
using namespace std;

// Count how many times lowercase vowels occurred in a String entered
// by the user.

void count(char ch[], int n){
    int count = 0;
    for(int i=0; ch[i] !='\0'; i++){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
            count++;
        }
    }
    cout << count << endl;
}



int main(){
char ch[] = {"aeiou"};
int n = 11;

count(ch,n);

    return 0;
}