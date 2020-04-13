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
        string a[9];
        for(ll i=0;i<9;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<9;i++)
        {
            for(ll j=0;j<9;j++)
            {
                if(a[i][j]=='3')
                a[i][j]='4';
            }
        }
        for(ll i=0;i<9;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}