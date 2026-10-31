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
  int n;
  cin >> n;
  int a[n];
  int off = 0, res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == -1 && off == 0)
      res++;
    if (a[i] == -1 && off > 0)
      off--;
    if (a[i] > 0)
      off += a[i];
  }
  cout << res;
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
