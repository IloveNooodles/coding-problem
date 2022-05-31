#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
  vector<int> a = score;
  vector<string> ans;
  map<int, string> mapping;
  sort(a.begin(), a.end(), greater<int>());
  for(int i = a.size()-1; i >= 0; i--){
    if(i == 0){
      mapping[a[i]] = "Gold Medal";
    }else if (i == 1){
      mapping[a[i]] =  "Silver Medal";
    }else if(i == 2){
      mapping[a[i]] = "Bronze Medal";
    }else{
      mapping[a[i]] = to_string(i+1);
    }
  }
  for(int i = 0; i < a.size(); i++){
    ans.push_back(mapping[score[i]]);
  }
  return ans;       
}

int main(){
  // vector<string> answer;
  // map<int, string> ans;
  vector<int> d = {10, 3, 9, 4, 8};
  findRelativeRanks(d);
  // vector<int> e = d;
  // sort(e.begin(), e.end(), greater<int>());
  // for(int i = e.size()-1; i>= 0; i--){
  //   if(i == 0){
  //     ans[e[i]] = "Gold Medal";
  //   }else if (i == 1){
  //     ans[e[i]] =  "Silver Medal";
  //   }else if(i == 2){
  //     ans[e[i]] = "Bronze Medal";
  //   }else{
  //     ans[e[i]] = to_string(i+1);
  //   }
  // }
  // for(int i = 0; i <= e.size(); i++){
  //   answer.push_back(ans[d[i]]);
  // }
  // return 0;
}