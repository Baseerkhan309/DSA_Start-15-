#include <iostream>
#include <cstring>
using namespace std;

// Input Char Array

int main(){
char word[50];
cin.getline(word,50);

cout << "Your Word Was =" << word <<  endl;
cout << "Your Word length Was =" << strlen(word) <<  endl;

    return 0;
}