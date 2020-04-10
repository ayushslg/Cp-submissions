#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        ll p[n],c[n];
        for(ll i=0;i<n;i++)
        {
            cin>>p[i]>>c[i];
            if(c[i]>p[i])
            {
                flag=1;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        {
            for(ll i=0;i<n-1;i++)
            {
                if(p[i]>p[i+1]||c[i]>c[i+1])
                {
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
                else if(c[i+1]-c[i]>p[i+1]-p[i])
                {
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                    
                }
                
            }
            if(flag==0)
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}