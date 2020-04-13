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
        ll n,a,b;string s={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        cin>>n>>a>>b;
        if(b==a)
        {
            ll j=0;
            while(j<n)
            {
            for(ll i=0;i<26;i++)
            {
              
                if(j>n-1)
                break;
                cout<<s[i];
                  j++;
                
            }
            }
            cout<<endl;
        }
        else 
        {
            ll j=0;
            while(j<n)
            {
                for(ll i=0;i<b;i++)
                {
                    
                    if(j==n)
                    break;
                    cout<<s[i];
                    j++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}