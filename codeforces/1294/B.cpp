#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define endl "\n"
#define all(x) x.begin(),x.end()
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        
        ll n;
        cin>>n;
        vector<pair<int,int>>a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
        sort(all(a));
        pair<int,int>curr=make_pair(0,0);
        ll flag=0;string ans;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            x=a[i].first-curr.first;
            y=a[i].second-curr.second;
            if(x<0||y<0)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            ans+=string(x,'R');
            ans+=string(y,'U');
            curr=a[i];
        }
        if(flag==0)
        cout<<"YES"<<endl<<ans<<endl;
        
    }
    return 0;
}