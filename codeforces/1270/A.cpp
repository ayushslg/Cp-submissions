#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k1,k2,m=0,ma=0;
        cin>>n>>k1>>k2;
        ll a[k1],b[k2];
        for(ll i=0;i<k1;i++)
        {
            cin>>a[i];
            if(a[i]>m)
            m=a[i];
        }
        for(ll i=0;i<k2;i++)
        {
            cin>>b[i];
            if(b[i]>ma)
            ma=b[i];
        }
        if(m>ma)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
    }
    
    
    
    
    return 0;
}