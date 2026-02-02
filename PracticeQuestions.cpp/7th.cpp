#include <iostream> 
using namespace std;

// Print Formula //

int formulaNum(int a, int b){
    int res = a*a + b*b + 2*(a*b);

    return res;

}

int main(){


cout << formulaNum(2,4);
    return 0;
}