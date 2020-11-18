#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rrep(i,n) for (int i = 1; i <= (n); i++)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
using ll = long long;
using Graph = vector<vector<int>>;
//using P = pair<int,int>;
using Pl = pair<ll,ll>;
const long long INF = 1LL << 60;
const int dh[4] = {1,-1,0,0};
const int dw[4] = {0,0,1,-1};
const int MOD = 1000000009;
void add(ll &a, ll b) {a = (a+b) % MOD;}


int main() {
	int A,B,C; cin >> A >> B >> C;
	int ans = max(C*10+A+B,max(A+(B*10+C), (A*10+B)+C));
	cout << ans << endl;

}
