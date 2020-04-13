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
        cout<<0<<endl;
        else
        {
            if(n%2==0)
            cout<<(n/2)-1<<endl;
            else
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}