#include <bits/stdc++.h>
using namespace std;

long long divisiors(long long a){
  long long sum = 1;
  for(long long i = 2; i*i <= a; i++){
    if(a%i == 0 && a != i*i){
      sum += i + a/i;
    }else if(a == i*i){
      sum += i;
    }
  }
  return sum;
}

int main(){
  long long a;
  while(cin >> a){
    long long ans = divisiors(a);
    if(ans == a){
      cout << a << " Perfect" << endl;
    }else if(abs(ans - a) <= 2){
      cout << a << " Almost Perfect" << endl;
    }else{
      cout << a << " Not Perfect" << endl;
    }
  }
}