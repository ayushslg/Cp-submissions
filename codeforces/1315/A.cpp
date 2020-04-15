#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        //ll p=max((max(x,(a−1−x))*b),(a*max(y,b−1−y)));
        ll q=max(x,a-1-x);
        ll r=max(y,b-1-y);
        ll p=max((b*q),(r*a));
        cout<<p<<endl;
    }
    return 0;
}