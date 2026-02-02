#include <iostream>
using namespace std;

int main(){
 
// Write a Parogram where Skip the multiple of 10 value....

    int num;
    do{
  cout << "please enter  number " << endl;
  cin >> num ;

  if(num % 10 == 0){
    continue;
  }
  cout  <<"You Entered : " << num << endl;
    }while(true);



    return 0;
}