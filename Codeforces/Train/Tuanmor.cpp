#include <bits/stdc++.h>
#include <string>

using namespace std;

#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count = 0;
    string a, b;
    cin >> a >> b;

    int t1 = a.length();
    int t2 = b.length();

   while(t1 > 0 && t2 > 0){
        if(a[t1 - 1] == b[t2 - 1]){
            count++;
        } else break;
        t1--;
        t2--;
   }
   cout << a.length() + b.length() - 2*count;
}
