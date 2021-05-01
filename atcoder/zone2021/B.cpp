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
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
inline void solve()
{
    ll n,x2,y2;
    cin>>n>>x2>>y2;
    long double ans=0.0;
    ll x1=0,y1=0;
    f(n)
    {
        cin>>x1>>y1;
        ll q=y1*x2 - x1*y2;
        ll r=x2-x1;
        ans=max(ans,(long double)q/r);
        
    }
    
    long double sec=(long double)y2/x2;
    
    if(ans<sec)
        ans=0;
    cout<<fixed<<setprecision(10)<<ans<<endl;

}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    int i=0;
    while(t--)
    {
        ++i;
        //cout << "Case #" << i << ": " ;
        solve();
        
    }
    return 0;
}