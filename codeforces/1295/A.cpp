#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<4)
        {
            if(n==2)
            cout<<1<<endl;
            else
            cout<<7<<endl;
        }
        else
        {
            if(n%2==0)
            {
                for(ll i=0;i<n/2;i++)
                cout<<1;
                cout<<endl;
            }
            else
            {
                cout<<7;
                for(ll i=0;i<(n-3)/2;i++)
                cout<<1;
                cout<<endl;
            }
    
        }
    }
    return 0;
}