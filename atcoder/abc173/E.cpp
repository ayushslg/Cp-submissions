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
const ll MOD = 1000000007LL;
const ll mod = MOD;

template <int mod>
struct ModInt {
    int x;
    ModInt() : x(0) {}
    ModInt(long long x_) {
        if ((x = x_ % mod + mod) >= mod) x -= mod;
    }
    ModInt& operator+=(ModInt rhs) {
        if ((x += rhs.x) >= mod) x -= mod;
        return *this;
    }
    ModInt& operator-=(ModInt rhs) {
        if ((x -= rhs.x) < 0) x += mod;
        return *this;
    }
    ModInt& operator*=(ModInt rhs) {
        x = (unsigned long long)x * rhs.x % mod;
        return *this;
    }
    ModInt& operator/=(ModInt rhs) {
        x = (unsigned long long)x * rhs.inv().x % mod;
        return *this;
    }

    ModInt operator-() const { return -x < 0 ? mod - x : -x; }
    ModInt operator+(ModInt rhs) const { return ModInt(*this) += rhs; }
    ModInt operator-(ModInt rhs) const { return ModInt(*this) -= rhs; }
    ModInt operator*(ModInt rhs) const { return ModInt(*this) *= rhs; }
    ModInt operator/(ModInt rhs) const { return ModInt(*this) /= rhs; }
    bool operator==(ModInt rhs) const { return x == rhs.x; }
    bool operator!=(ModInt rhs) const { return x != rhs.x; }
    ModInt inv() const { return pow(*this, mod - 2); }

    friend ostream& operator<<(ostream& s, ModInt<mod> a) {
        s << a.x;
        return s;
    }
    friend istream& operator>>(istream& s, ModInt<mod>& a) {
        s >> a.x;
        return s;
    }
};

using mint = ModInt<MOD>;

inline void solve()
{
    ll n, k;
    cin >> n >> k;
    vll a(n);
    input(a, n);
    sort(all(a));
    mint ans = 1;
    if (a[n - 1] == 0 and (k & 1))
    {
        cout << 0 << endl;
        return;
    }
    if (a[n - 1] <= 0 and (k & 1))
    {
        for (int i = n - 1; i >= n - k; i--)
            ans = ans * a[i];
        cout << ans << endl;
        return;
    }
    int i = 0, j = n - 1;
    if (k & 1)
    {
        k--;
        ans = a[j];
        j--;
    }
    k = k / 2;
    for (int t = 0; t < k; t++)
    {
        ll left = a[i] * a[i + 1];
        ll right = a[j] * a[j - 1];
        if (left > right)
        {
            ans = ans * left;
            i += 2;
        }
        else
        {
            ans = ans * right;
            j -= 2;
        }
    }
    cout << ans << endl;

}
int main()
{
    Imposter

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();

    }
    return 0;
}