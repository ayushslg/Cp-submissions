#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false)
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        bool hash[202];
        for(ll i=0;i<202;i++)
        hash[i]=false;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            hash[a[i]]=true;
        }
        for(ll i=n+x;i>0;i--)
        {
            ll c=0;
            for(ll j=1;j<=i;j++)
            {
                if(!hash[j])
                c++;
            }
            if(c<=x)
            {
                cout<<i<<endl;
                break;
            }
        }
        
        
    }
    return 0;
}