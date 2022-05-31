// NAMA : Muhammad Garebaldhie ER Rahman
// NIM : 13520029
// Prob 3 : Menentukan bilangan pada basis K

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cout << "Masukan nilai N: ";
  cin >> n;
  cout << "Masukan nilai K: ";
  cin >> k;

  int biggestpow = 0;
  int temp = k;
  while(temp < n){
    temp = temp*k;
    biggestpow++;
  }
  temp = temp/k;

  cout << "Bilangan dalam basis K adalah ";
  
  for(int i = 0; i <= biggestpow; i++){
    cout << n / temp << " ";
    n = n%temp;
    temp = temp/k;
  }
}
