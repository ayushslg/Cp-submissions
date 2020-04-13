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
        cin>>n;ll flag=0;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
            cin>>b[i];
        vll good(2, 0);
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i] && !good[0]) {
            cout << "NO\n";flag=1;
            break;
        } else if (a[i] < b[i] && !good[1]) {
            cout << "NO\n";flag=1;
            break;
        }
        if (a[i] == -1) good[0] = 1;
        if (a[i] == 1) good[1] = 1;
    }
    if(flag==0)
    cout << "YES\n";
        
    }
    return 0;
}