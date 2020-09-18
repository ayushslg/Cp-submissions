#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];ll ans=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll x=0;
    ll c[2];
    for(int i=45;i>=0;i--)
    {
        c[0]=0,c[1]=0;
        for(int j=0;j<n;j++)
        {
            if((a[j]>>i)&1LL)
            c[1]++;
            else
            c[0]++;
        }
        if((c[0]>c[1]) and x+(1LL<<i)<=k)
        {
            x+=(1LL<<i);
        }
    }
    for(int i=0;i<n;i++)
    {
        ans+=(a[i]^x);
    }
    cout<<ans<<endl;
    
}
int main()
{
    Imposter

    int t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }
}
