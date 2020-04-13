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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll flag=0,temp=0,flag1=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                flag=1;if(temp>0)
                {
                    flag1=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else
            {
                temp=1;
                if(flag>0)
                {
                    flag1=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            
        }
        if(flag1==0)
        cout<<"YES"<<endl;
    }
    
    return 0;
}