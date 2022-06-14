#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) {
    ll res = 1;    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;    x = (x * x) % p;
    } return res;
}
int maxSubArrayLen(vector<int>& nums, int k) {
    int ret = 0;
    unordered_map <int, int> m;
    int n = nums.size();
    int temp = 0;
    m[0] = -1;
    for (int i = 0; i < n; i++) {
        temp += nums[i];
        if (m.count(temp - k)) {
            ret = max(ret, i - m[temp - k]);
        }
        if (!m.count(temp)) {
            m[temp] = i;
        }
    }
    return ret;
}

inline void solve()
{
    ll n, sum;
    cin >> n >> sum;
    vector<int> a(n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c += a[i];
    }
    if (c < sum)
    {
        cout << -1 << endl;
        return;
    }
    cout << n - maxSubArrayLen(a, sum) << endl;

}
int main()
{
    Imposter

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}