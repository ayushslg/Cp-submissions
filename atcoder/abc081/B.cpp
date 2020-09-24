#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void inline solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll f=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
            f=0;
    }
    if(f)
    {
        ll ans=1e18;
        for(int i=0;i<n;i++)
        {
            ll c=0;
            while(a[i]>0 and !(a[i]&1))
            {
                a[i]=a[i]/2;
                c++;
            }
            ans=min(c,ans);
        }
        cout<<ans<<endl;
    }
    else
        cout<<0<<endl;


}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
