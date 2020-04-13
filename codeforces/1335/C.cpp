#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
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
        ll n;
        cin>>n;
        ll a[n];ll hash[n+1];
        for(ll i=0;i<n+1;i++)
        hash[i]=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            hash[a[i]]++;
        }
        
        if(n==1)
        cout<<0<<endl;
        else
        {
        sort(hash,hash+n+1);
        ll small=hash[n];ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(hash[i]>0)
            c++;
        }
        if(c==small)
            cout<<c<<endl;
        else if(c>small)
        cout<<small<<endl;
        else
        {

            if(small>c+1)
            cout<<c+1<<endl;
            else
            cout<<c<<endl;
            
            
        }
        }
        
    }
    return 0;
}