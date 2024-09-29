#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;

ll sum_one_to_n(int n)
{
  if (n <= 0)
    return 0;
  return (n * (n + 1)) / 2;
}

ll prefix_sum(int left, int mid)
{
  return sum_one_to_n(mid) - sum_one_to_n(left);
}

ll suffix_sum(int mid, int right)
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
      cout << pref_sum << " " << suf_sum << "\n";
      cout << left << " " << right << " " << mid << "\n";
    }
    // pref sum max + suff sum min
    // middlepoint lebih 1 dan kurang 1
    // pref sum min + suff sum max
    // got the middle point
    // 2 3
    //   ^
    // 1 + 2 + 3
    // 2 + 3 + 4 + 5 (14) - 6 + 7 + 8 (21)
    // compare i pref and i + 1 suff
    ll pref_sum_min = prefix_sum(start - 1, left);
    cout << "pref sum min" << pref_sum_min << endl;
    ll suff_sum_min = suffix_sum(left, end);
    ll pref_sum_max = prefix_sum(start - 1, right);
    cout << "pref sum max" << pref_sum_max << endl;
    ll suff_sum_max = suffix_sum(right, end);
    cout << pref_sum_min << " " << suff_sum_min << "\n";
    ans = min(abs(pref_sum_max - suff_sum_max), abs(pref_sum_min - suff_sum_min));
    cout << ans << "\n";
  }
}
