#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;

ll sum_one_to_n(ll n)
{
  if (n <= 0)
    return 0;
  return (n * (n + 1)) / 2;
}

ll prefix_sum(ll left, ll mid)
{
  return sum_one_to_n(mid) - sum_one_to_n(left);
}

ll suffix_sum(ll mid, ll right)
{
  return sum_one_to_n(right) - sum_one_to_n(mid);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll input;
  cin >> input;
  for (ll i = 0; i < input; i++)
  {
    ll n, start, end, left, right, ans;
    cin >> n >> start;
    end = start + n - 1, left = start, right = end;
    while (left < right)
    {
      ll mid = left + (right - left) / 2;
      ll pref_sum = prefix_sum(start - 1, mid);
      ll suf_sum = suffix_sum(mid, end);
      if (suf_sum > pref_sum)
      {
        left = mid + 1;
      }
      else
      {
        right = mid;
      }
    }

    ll pref_sum_min = prefix_sum(start - 1, left);
    ll suff_sum_min = suffix_sum(left, end);
    ll pref_sum_max = prefix_sum(start - 1, left - 1);
    ll suff_sum_max = suffix_sum(left - 1, end);
    ans = min(abs(pref_sum_max - suff_sum_max), abs(pref_sum_min - suff_sum_min));
    cout << ans << "\n";
  }
}
