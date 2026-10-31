// بسم الله الرحمن الرحيم

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define popCnt(x) (__builtin_popcountll(x))
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define setpre(n, x) cout << fixed << setprecision(n) << x << endl;

void solve()
{
  string s;
  cin >> s;
  int n = s.size();
  int a[n] = {0};

  for (int i = 0; i < n; i += 2)
    a[i] = s[i] - '0';
  sort(a, a + n);

  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0 && i != n - 1)
      cout << a[i] << "+";
    else if (a[i] != 0 && i == n - 1)
      cout << a[i];
    }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;

  while (t--)
  {
    solve();
  }
}