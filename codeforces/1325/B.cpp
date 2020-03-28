#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],c=0,max=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            c++;
        }
        cout<<c+1<<endl;
    }
	// your code goes here
	return 0;
}
