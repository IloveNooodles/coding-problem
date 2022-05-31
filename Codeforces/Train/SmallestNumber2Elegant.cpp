#include <bits/stdc++.h>

using namespace std;

/** START OF TEMPLATE DEBUGGER **/
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) "[" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
/** END OF TEMPLATE DEBUGGER **/

const long long INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<long long> v(4);
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }
    vector<char> c(3);
    for (int i = 0; i < 3; i++) {
        cin >> c[i];
    }
    sort(v.begin(), v.end());
    long long res = INF;
    do {
        long long cur = v[0];
        for (int i = 0; i < 3; i++) {
            cur = (c[i] == '+' ? (cur + v[i + 1]) : (cur * v[i + 1]));
        }
        res = min(res, cur);
        long long p1 = (c[0] == '+' ? v[0] + v[1] : v[0] * v[1]);
        long long p2 = (c[1] == '+' ? v[2] + v[3] : v[2] * v[3]);
        cur = (c[2] == '+' ? p1 + p2 : p1 * p2);
        res = min(res, cur);

    } while (next_permutation(v.begin(), v.end()));
    cout << res << "\n";

    return 0;
}
