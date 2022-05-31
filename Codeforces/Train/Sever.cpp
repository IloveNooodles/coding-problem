#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, t;
  cin >> a >> t;
  int sum = 0;
  int cnt = 0;
  for(int i = 0; i < a; i++){
    int b;
    cin >> b;
    if(sum + b > t){
      break;
    }else 
    cnt++;
    sum += b;
  }
  cout << cnt;
}