#include <iostream>
using namespace std;

int main(){
//...Do While loop.......//

int i =1;
 
 while( i <= 10){

    if(i == 3){
        break;
    }
    cout << i << "while loop" << endl;
   i++; 
 }
  cout << "out of loop " << endl;
}