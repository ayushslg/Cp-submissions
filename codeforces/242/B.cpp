#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
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
    ll n;
    cin>>n;
    vlll a(n);ll min=1000000001,max=0;
    for(ll i=0;i<n;i++)
    {
        ll at,b;
        cin>>at>>b;
        if(at<min)
        min=at;
        if(b>max)
        max=b;
        a[i].pb(at);
        a[i].pb(b);
       
    }
    
   for(ll i=0;i<n;i++)
   {
       if(a[i][0]==min && a[i][1]==max)
       {
           cout<<i+1<<endl;
           return 0;
       }
   }
   cout<<-1<<endl;
    return 0;
}