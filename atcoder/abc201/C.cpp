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
    ll ans = 0;
    string s;
    cin >> s;
    ll q = 4, r = 0, p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'o')
            q--, p++;
        if (s[i] == '?')
            r++;
    }
    if (p > 4 or (p == 0 and r == 0))
    {
        cout << 0 << endl;
        return;
    }
    ll z;
    //No x involved
    if (p > 0)
    {
        if (p == 1)
            z = 1;
        if (p == 2)
            z = 14;
        if (p == 3)
            z = 36;
        if (p == 4)
            z = 24;
        ans += z;
    }
    ll x = r;

    //1 from x
    if (x > 0 and p <= 3)
    {
        p = p + 1;
        if (p == 1)
            z = 1;
        if (p == 2)
            z = 14;
        if (p == 3)
            z = 36;
        if (p == 4)
            z = 24;
        ans += (z * r);
        p = p - 1;

    }

    //2 from x
    if (x > 1 and p <= 2)
    {
        p = p + 2;
        if (p == 1)
            z = 1;
        if (p == 2)
            z = 14;
        if (p == 3)
            z = 36;
        if (p == 4)
            z = 24;
        p = p - 2;
        ans += (z * ((r * (r - 1)) / 2));
    }

    //3 from x
    if (x > 2 and p <= 1)
    {
        p = p + 3;
        if (p == 1)
            z = 1;
        if (p == 2)
            z = 14;
        if (p == 3)
            z = 36;
        if (p == 4)
            z = 24;
        p = p - 3;
        ans += (z * ((r * (r - 1) * (r - 2)) / 6));
    }

    //all 4 from x
    if (x > 3 and p == 0)
    {
        p = p + 4;
        if (p == 1)
            z = 1;
        if (p == 2)
            z = 14;
        if (p == 3)
            z = 36;
        if (p == 4)
            z = 24;
        p = p - 4;
        ans += (z * ((r * (r - 1) * (r - 2) * (r - 3)) / 24));
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