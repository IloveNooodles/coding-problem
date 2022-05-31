#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
  sort(nums.begin(), nums.end());
  int i = 0;
  int ans = 0;
  if(nums.size() > 1){
    while(i != nums.size()){
      if(nums[i] == nums[i+1]) i += 2;
      else{
        ans = nums[i];
        break;
      }
    }
  }else ans = nums[0];
  return ans;
}

int main(){
  vector<int> a = {0,0,1,1,3,4,4};
  cout << singleNumber(a);
}