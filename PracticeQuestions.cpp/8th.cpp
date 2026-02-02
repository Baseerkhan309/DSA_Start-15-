#include <iostream>
using namespace std;

// return Charecter //
char chIncrement(char ch){

   if(ch == 'z'){
    return 'a';
   }
   return ch+1;
} 


int main(){
 
    cout << chIncrement('z');

    return 0;
}
