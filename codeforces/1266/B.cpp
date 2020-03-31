#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll a[t],b[t];
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
        b[i]=a[i]/14;
    }
    for(ll i=0;i<t;i++)
    {
        ll lim=(14*b[i])+1;
        if(a[i]>=lim && a[i]<=lim+5 && a[i]>14)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
     return 0;
}