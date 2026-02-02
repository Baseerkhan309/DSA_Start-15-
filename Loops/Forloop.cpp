#include <iostream>
using namespace std;

int main(){
//....Sum of N....//

  int n;
  cout << "please Enter a Number :" << endl;
  cin >> n;
 
  int sum  = 0;
  for(int i = 1; i <=n; i++){
    
    sum += i;
}

cout << sum << endl;

    return 0;
}