#include <iostream>
#include <vector>
using namespace std;

// Vector Implementation 

int main(){
vector<int> vec = {1,2,3,4};
  cout << "Size Of Vector " << vec.size()  << endl;
  cout << "Capacity Of Vector " << vec.capacity() << endl;

  vec.push_back(5);
  cout << "Size Of Vector " << vec.size() << endl;
  cout << "Capacity Of Vector " << vec.capacity() << endl;


  vec.pop_back();
cout << "Size Of Vector " << vec.size() << endl;
  cout << "Capacity Of Vector " << vec.capacity() << endl;

  return 0;
}