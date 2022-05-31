#include <iostream>
using namespace std;

int main(){
    int a, pembagi = 1;
    cin >> a;
    do{
        cout << a;
        a = a/pembagi;
        pembagi++;
    }
    while(pembagi < a);

    }
