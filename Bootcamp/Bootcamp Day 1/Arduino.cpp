#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void insertToArray(float x, float (&arr)[10])
{

  holderF = arr[0];
  arr[0] = x;
  for (int j = 1; j < 10; j++)
  {
    if (j%2 != 0)
    {
      temporaryF = arr[j];
      arr[j] = holderF;
      holderF = arr[j+1];
      arr[j+1] = temporaryF;
    }
  }
}

int main(){
    float arr[10];
    int i = 0;
    while(true){
        float x;
        cin >> x;
        insertToArray(x, arr);
    }
}
