/*
      @author : ashnove
*/
#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define lld long double
#define F first
#define S second
#define Th third
#define endl "\n"
#define nl cout << endl;
#define pb push_back
#define f(i, a, b) for (ll i = a; i < b; i++)
#define what_is(x) cerr << #x << " is " << x << endl;
#define mat vector<vector<ll>>
mat cn(ll n, ll m) {return vector<vector<ll>>(n, vector<ll>(m));}
bool comp1(char &s1, char &s2) { return s1 > s2; }
bool comp2(const pair<ll, pair<ll, ll>> &a, const pair<ll, pair<ll, ll>> &b) {
      if (a.first > b.first)
            return 1;
      if (a.first == b.first && a.S.S > b.S.S)
            return 1;
      return 0;
}
class Pair { public: ll first, second;};
bool comp3(const Pair &a, const Pair &b) {
      if (a.F > b.F) return 1; return 0;
}
class Trips { public: ll first, second, third;};
bool comp4(const Trips &a, const Trips &b) {
      if (a.Th > b.Th) return 1; return 0;
}

ll const mod = 1e9 + 7;
ll const inf = 1e18;
ll const maxn = 2e5 + 1;

ll operation(ll a[],ll c[], ll n, ll turn, ll cnt, ll time){

      bool ok = 1, ok2 = 1;

      // for(ll i = 1; i <= 2*n; i++){
      //       cout << a[i] << " ";
      // }
      // nl;
      for(ll i = 1; i < 2*n; i++){
            if(a[i+1] < a[i])
                  ok = 0;
      }
      if(ok){
            return cnt;
      }
      if(time == 1){
            for(ll i = 1; i <= 2*n; i++){
                  if(a[i] != c[i])
                        ok2 = 0;
            }
            // cout << ok << " " << ok2 << endl;
            if(ok2){
                  return -1;
            }
      }

      if(turn==0){
            for(ll i = 1; i < 2*n; i+=2){
                  swap(a[i], a[i+1]);
            }
            return operation(a, c,  n, 1, cnt+1, 1);
      }
      else{
            for(ll i = 1; i <= n; i++){
                  swap(a[i], a[i + n]);
            }
            return operation(a, c , n, 0, cnt+1, 1);
      }

}

void solve()
{
      ll t = 1;
      // cin >> t;
      for (ll tt = 1; tt <= t; tt++) {
            ll n; cin >> n;

            ll a[2*n+1], b[2*n + 1], c[2*n + 1];
            for(ll i = 1; i <= 2*n; i++){
                  cin >> a[i];
                  b[i] = c[i] = a[i];
            }

            // sort(b+1, b+2*n);
            ll ans1 = operation(a, c, n, 0, 0, 0);
            ll ans2 = operation(b, c, n, 1, 0, 0);
                  
            if(ans1 == -1 || ans2 == -1){
                  cout << max(ans1, ans2) << endl;
            }
            else
                  cout << min(ans1, ans2) << endl;
      }
}



int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
//*
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
#endif/**/
      solve();
      // cout << "Case #" <<tt<<": ";
      // printf("TIME: %.3lf\n", double(clock()) / CLOCKS_PER_SEC);
      return 0;
}