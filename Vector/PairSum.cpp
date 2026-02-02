#include <iostream>
#include <vector>
using namespace std;

// Pair Sum 

vector<int> pairsum(vector<int> vec, int target){
    int st =0, end = vec.size()-1;
    int currSum = 0;
    vector<int> ans;

    while(st < end){
     currSum = vec[st] + vec[end];

    if(currSum == target){
    ans.push_back(st);
    ans.push_back(end);

    return ans;
    }else if(currSum > target){
        end--;
    }else {
        st++;

    }

    }
    return ans;
}



int main(){
vector<int> vec= {1,2,3,4,5};
int target = 5;
  vector<int>ans = pairsum(vec,target);
  cout << ans[0] <<"," << ans[1];

    return 0;
}