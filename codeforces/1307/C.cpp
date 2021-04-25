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
    string s;
    cin >> s; 
    ll ans=0,c=0; 
    rep(i,0,26){
        ll c=0; 
        rep (j,0,s.length()){
            if (s[j]-'a'==i)c++; 
        }
        ans=max(ans,c); 
        ans=max(ans,(c*(c-1))/2); 
    }
    rep(i,0,26){
        rep(k,0,26){
            if(i==k) continue; 
            ll cn1=0,cn2=0; 
            for(int j=s.length()-1;j>=0;j--){
                if(s[j]-'a'==i)cn2++; 
                else if(s[j]-'a'==k) cn1+=cn2; 
            }
            ans=max(ans, cn1); 
        }
    }
    cout<<ans; 
}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}