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
  bool isspace = false;
  for (int i = 0; i < s.size(); i++)
  {
    if (s.substr(i, 3) == "WUB")
    {
      if (res.size() > 0)
      {
        isspace = true;
      }
      i += 2;
    }
    else
    {
      if (isspace)
      {
        res += ' ';
        isspace = false;
      }
      res += s[i];
    }
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
