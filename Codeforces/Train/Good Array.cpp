#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> ans;
    vector<long long> cnt(MAX + 1);
    long long sum = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        ++cnt[a[i]];
        sum = sum + a[i];
    }

    for(int i = 0; i < n; i++){
        sum = sum - a[i];
        --cnt[a[i]];
        if(sum%2 == 0 && sum/2 <= MAX && cnt[sum/2] > 0){
            ans.push_back(i);
        }
        sum = sum + a[i];
        ++cnt[a[i]];
    }

    cout << ans.size() << endl;
    for(auto it: ans){
        cout << it + 1 << " ";
    }
    cout << endl;
}
