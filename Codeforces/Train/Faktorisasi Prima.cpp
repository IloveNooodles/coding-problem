#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, faktor, div;
    cin >> n;
    faktor = 2;
    div = n;
    for(faktor; faktor <= sqrt(n); faktor++){
        if(div%faktor == 0){
            int cur = 0;
            while(div%faktor == 0){
                div = div/faktor;
                cur++;
            }
            if (cur != 1){
                cout << faktor << " ^ " << cur;
            } else {
                cout << faktor;
            }
            if(div != 1){
            cout << " x ";
            }
        }
    }
    if(div != 1){
        cout << faktor;
    }
    cout << endl;
}
