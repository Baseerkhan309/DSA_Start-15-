#include <iostream>
using namespace std;

// Search In Sorted Array 
bool search(int arr[][4], int n, int m, int key){
    int i = 0, j = m-1;

    while(i < n && j>=0){
        if(arr[i][j] == key){
            cout << "found at Cell (" << i << "," << j <<")\n" ;
            return true;

        }else if(arr[i][j] > key){
           j--;
        }else{
            i++;
        }
    }
    cout << "key Not Found\n";
    return false;
}



int main(){
int arr[][4] = {{5,10,15,20},
                {25,30,35,40},
                {45,50,55,60},
                {70,75,80,85}};
    search(arr,4,4,10);


    return 0;

}