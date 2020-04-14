#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll a[n],sum=0;
       for(ll i=0;i<n;i++)
       cin>>a[i];
       for(ll i=0;i<n;i++)
       {
           sum+=a[i];
       }
       if(sum>m)
       cout<<m<<endl;
       else
       cout<<sum<<endl;
    }
    
    return 0;
}