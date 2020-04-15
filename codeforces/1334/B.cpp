#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
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
        for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);ll c=0,sum=0;
        for(ll i=n-1;i>=0;i--)
        {
            sum+=a[i];
            if((sum/(n-i))>=x)
            c++;
            else
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}