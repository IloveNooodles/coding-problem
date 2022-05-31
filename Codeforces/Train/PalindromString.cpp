#include <bits/stdc++.h>
using namespace std;

int Palindrom(string s){
    int len = s.length();
    return (s[0] == s[len - 1] ? "yes" : "no");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    Palindrom(s);
}
