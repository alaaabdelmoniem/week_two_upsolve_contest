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
  string res = "";
  for (int i = 0; i < s.size(); i++)
  {
    if (s.substr(i, 3) == "WUB")
    {
      if (i != 0 && i + 3 != s.size() && res.size() >= 1)
      {
        res += ' ';
      }

      i += 2;
    }
    else
    {
      res += s[i];
    }
  }
  // cout << res.size();
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
