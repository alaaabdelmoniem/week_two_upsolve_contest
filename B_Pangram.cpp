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
  bool check[26] = {false};
  for (int i = 0; i < n; i++)
  {
    s[i] = tolower(s[i]);
    check[s[i] - 'a'] = true;
  }
  bool isallaplha = true;
  for (int i = 0; i < 26; i++)
  {
    if (check[i] == false)
    {
      isallaplha = false;
      break;
    }
  }
  if (isallaplha)
    cout << "YES";
  else
    cout << "NO";
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
