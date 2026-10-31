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
  string s;

  cin >> n >> s;
  int counter = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == s[i + 1])
      counter++;
  }
  cout << counter;
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
