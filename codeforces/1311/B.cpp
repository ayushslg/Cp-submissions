#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()


int main()
{
    
    Imposter
    
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
		cin >> n >> m;
		vector<ll> a(n);
		for (ll i = 0; i < n; ++i) {
			cin >> a[i];
		}
		vector<ll> p(n);
		for (ll i = 0; i < m; ++i) {
			ll pos;
			cin >> pos;
			p[pos - 1] = 1;
		}
		while (true) {
			bool ok = false;
			for (ll i = 0; i < n; ++i) {
				if (p[i] && a[i] > a[i + 1]) {
					ok = true;
					swap(a[i], a[i + 1]);
				}
			}
			if (!ok) break;
		}
		bool ok = true;
		for (ll i = 0; i < n - 1; ++i) {
			ok &= a[i] <= a[i + 1];
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
    return 0;
}