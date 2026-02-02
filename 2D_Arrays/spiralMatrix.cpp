#include <iostream>
using namespace std;

// Spiral Matrix //
void spiralMatrix(int arr[][4], int n, int m){
 int sRow = 0;
 int sCol = 0;
 int eRow = n-1;
 int eCol = m-1;

while(sRow <= eRow && sCol <=eCol){

// Top //
 for(int i=sRow; i<=eCol; i++){
    if(sCol == eCol){
        break;
    }
    cout << arr[sRow][i] << " ";
 }

// right //
 for(int j=sRow+1; j<=eRow; j++){
    cout << arr[j][eCol] << " ";
 }

// Bottom //
for(int i=eCol-1; i>=sCol; i--){
    if(sRow == eRow){
        break;
    }
    cout << arr[eRow][i] << " ";
}

// Left //
for(int j=eRow-1; j>=sRow+1; j--){
    cout << arr[j][sCol] << " ";
}

sRow++; sCol++;
eRow--; eCol--;

}
}


int main(){
int arr[4][4] ={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                };
            
    spiralMatrix(arr,3,4);      

    return 0;
}