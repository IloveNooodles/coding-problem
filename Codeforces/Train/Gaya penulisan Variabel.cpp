#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n = s.length();

    bool isSnake = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '_'){
            isSnake = true;
            break;
        }
    }
    if(isSnake){
        for(int i = 0; i < n; i++){
            char x = s[i];
            if(x == '_') continue;
            if(i > 0 && s[i-1] == '_'){
                x = toupper(x);
            }
            cout << x;
        }
        cout << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            char x = s[i];
            if(isupper(x)){
                cout << "_";
                x = tolower(x);
            }
            cout << x;
        }
        cout << endl;
    }
    return 0;
}


