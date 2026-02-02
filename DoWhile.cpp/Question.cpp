#include <iostream>
using namespace std;


int main(){

// Check a Number where it is Multiple of 10 or Not ....//

 int num;

 do{
  cout << "Please enter a number" << endl;
  cin >> num;

  if( num % 10 == 0){

    cout << "You Entered a multiple of 10 number..." << endl;   
  break;
}
    cout << "You Enter "<< num << " Please enter another number" << endl;
 
 }while(true);
    return 0;
}