#include <bits/stdc++.h>
using namespace std;

int faktor(int x, int a, int b){
    return abs(a*x + b);
}

int main(){
    int a, b, x, k;
    cin >> a >> b >> k >> x;
    for(int i = 0; i < k; i++){
        int temp;
        temp = faktor(x, a, b);
        x = temp;
    }
    cout << x << endl;
}
