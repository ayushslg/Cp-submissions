#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,x=0,y=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(n%2==0)
    {
        for(ll i=0;i<n/2;i++)
        x+=a[i];
        for(ll i=(n/2);i<n;i++)
        y+=a[i];
    }
    else
    {
        ll p=n/2;
        for(ll i=0;i<p;i++)
        x+=a[i];
        for(ll i=p;i<n;i++)
        y+=a[i];
        
    }
    cout<<((x*x)+(y*y));
    return 0;
    
}