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
        if(n==1)
        cout<<-1<<endl;
        else
        {
            cout<<2;
            for(ll i=0;i<n-1;i++)
            cout<<3;
            cout<<endl;
        }
    }
    
    return 0;
}