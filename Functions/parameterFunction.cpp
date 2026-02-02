#include <iostream>
using namespace std;

int sum(int a, int b){
   return a+b ;

}
int subtract(int a, int b){
   return a-b ; 
}

int main(){
 int s = sum(4,2); // 6;
 cout << s << endl;

 int sub = subtract(4,2);
 cout << sub << endl;

    return 0;
}