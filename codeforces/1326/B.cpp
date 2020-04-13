#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
int main()
{
    ll n;
    cin>>n;
    ll b[n];
    for(ll i=0;i<n;i++)
    cin>>b[i];vll a;ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=b[i];
        a.pb(sum);
        if(b[i]<0)
        sum+=-b[i];
    }
    for(ll i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<endl;
    
    return 0;
}