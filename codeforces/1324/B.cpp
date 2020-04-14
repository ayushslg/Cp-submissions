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
        ll n;
        cin>>n;
        ll a[n],flag=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+2;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    cout<<"YES"<<endl;
                    flag=1;break;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==0)
        cout<<"NO"<<endl;
        
    }
    
    return 0;
}