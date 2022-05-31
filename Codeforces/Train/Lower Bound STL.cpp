#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int length, query, n;
    long number;
    vector<long> v;
    cin >> length;

    for(int i = 0; i < length; i++){
        cin >> n;
        v.push_back(n);
    }
    cin >> query;
    for(int i = 0; i < query; i++){
        cin >> number;
        vector<long>::iterator itr = lower_bound(v.begin(), v.end(), number);
        if(number == *itr){
            cout << "Yes " << (itr - v.begin() + 1) << endl;
        } else cout << "No " << (itr - v.begin() + 1) << endl;
    }
}
