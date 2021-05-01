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
    string s="ZONe";
    string str;
    cin>>str;
    ll n=str.length();
    str+='*';
    str+='*';
    str+='*';
    str+='*';
    ll ans=0;
    if(str.length()<4)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        string q="";
        q+=str[i];
        q+=str[i+1];
        q+=str[i+2];
        q+=str[i+3];
        //cout<<q<<endl;
        if(q==s)
            ans++;
    }
    cout<<ans<<endl;


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