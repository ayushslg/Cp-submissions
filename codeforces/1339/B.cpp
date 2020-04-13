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
        cin>>a[i];
        sort(a,a+n);
        ll l=0,h=n-1;vll arr;
        while(l<h)
        {
            arr.pb(a[h]);
            arr.pb(a[l]);
            h--;
            l++;
        }
        if(n%2!=0)
        arr.pb(a[l]);
        for(ll i=arr.size()-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}