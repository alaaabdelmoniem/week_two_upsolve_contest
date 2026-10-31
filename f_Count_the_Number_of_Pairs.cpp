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
  int t;
  cin >> t;
  while (t--)
  {
    int freq[53] = {0};
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int pairs = 0;

    for (int i = 0; i < n; i++)
    {

      if (islower(s[i]))
        freq[s[i] - 'a']++;
      else
        freq[((s[i]) - 'A') + 26]++;
    }

    for (int i = 0; i <= 26; i++)
    {
      int x = min(freq[i], freq[i + 26]);
      pairs += x;
      freq[i] -= x;
      freq[i + 26] -= x;
      while (freq[i] >= 2 && k != 0)
      {
        pairs++;
        k--;
        freq[i] -= 2;
      }
      while (freq[i + 26] >= 2 && k != 0)
      {
        pairs++;
        k--;
        freq[i + 26] -= 2;
      }
    }
    cout << pairs << endl;
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