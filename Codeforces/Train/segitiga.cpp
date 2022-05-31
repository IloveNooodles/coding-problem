#include <bits/stdc++.h>

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

    int a, count = 0;
    cin >> a;
    vector<long long>  v;
    for(int i = 0; i < a; i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < a - 2; i++){
        long long sum;
        sum = v[i];
        for(int j = i + 1; j < a - 1 ; j++){
            long long sum2;
            sum2 = sum + v[j];
            for(int k = j + 1; k < a; k++){
                if(sum2 > v[k]){
                    count++;
                }
            }
        }
    }
    cout << count;
}
