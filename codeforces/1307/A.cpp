#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
bool compare(string &s1,string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n];
        for(ll i=1;i<=n;i++)
        cin>>a[i];
        for(ll i=2;i<=n;i++)
        {
           ll p=min(a[i],d/(i-1));
           a[1]+=p;
           d-=p*(i-1);
        }
        cout<<a[1]<<endl;
        
    }
    return 0;
}