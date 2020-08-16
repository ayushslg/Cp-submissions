#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int maxn = 5e3 + 1;
const ll inf = 1e18;
bool vis[maxn];
 
void solve() {
 
   ll n, k, ans = -inf;
   cin >> n >> k;
   vector <ll> a(n + 1), c(n + 1);
   for (int i = 1; i <= n; i++)
      cin >> a[i];
   for (int i = 1; i <= n; i++)
      cin >> c[i];
 
   for (int i = 1; i <= n; i++) {
      memset(vis, false, sizeof(vis));
      vector <ll> p;
      p.push_back(0ll);
      int x = i;
      while (!vis[x]) {
         vis[x] = true;
         p.push_back(c[x]);
         x = a[x];
      }
      ll m = p.size() - 1;
      for (int i = 1; i <= m; i++) {
         p[i] += p[i - 1];
      }
      for (int i = 1; i <= m; i++) {
         ll rem = k - i;
         if (rem < 0)
            break;
         ans = max({ans, p[i] + p[m] * (rem / m), p[i]});
      }
   }
   cout << ans << '\n';
 
}
 
int main() {
#ifndef ONLINE_JUDGE
   freopen("inp.txt", "r", stdin);      freopen("outp.txt", "w", stdout);
#endif
   ios::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
 
   solve();
 
   return 0;
}