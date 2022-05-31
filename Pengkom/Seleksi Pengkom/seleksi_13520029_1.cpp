// NAMA : Muhammad Garebaldhie ER Rahman
// NIM : 13520029
// Prob 1 : Bilangan Hashard


#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, sum;
  cout << "Masukan bilangan: ";
  cin >> a;
  int temp = a;
  while(a > 0){ //loop ini berguna untuk menjumlahkan seluruh digit
    sum += a%10;
    a = a/10;
  }
  if(temp % sum == 0){//lakukan pengecekan apabila input yang dimasukan habis dibagi dengan jumlah digitnya
    cout << "Bilangan tersebut adalah bilangan Harshad";
  }else{
    cout << "Bilangan tersebut bukan bilangan Harshad";
  }
}