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
ll reg(ll p)
{
    ll t=1;
    while(pow(2,(t-1))<=p)
    {
        t++;
    }
    return (t-1);
}
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];vll ans;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll temp=a[0];ll c=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i]<temp)
            {
                c=max(c,reg(temp-a[i]));
            }
            else
            temp=a[i];
        }
        cout<<c<<endl;
    }
    return 0;
}