#include <bits/stdc++.h>
using namespace std;

void SieveOfErathones(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p*p <= n; p++){
        if(prime[p] == true){
            for(int i= p*p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
    for(int p = 2; p <= n; p++){
        if(prime[p]){
            cout << p << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(i == 2 || i == 3 || i == 5 || i == 7){
            cout << i << " ";
        }
        else if(i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0){
            continue;
        }
        else{
            cout << i << " ";
        }
    }
    cout << endl;
    SieveOfErathones(100);
}
