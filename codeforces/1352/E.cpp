#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()


int main()
{
    
    Imposter
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;ll ans=0;
        f(n){cin>>a[i];mp[a[i]]++;}
        f(n)
        {
            ll sum=a[i];
            for(ll j=i+1;j<n;j++)
            {
                sum+=a[j];
                if(mp.find(sum)!=mp.end())
                {
                    ans+=mp[sum];
                    mp.erase(sum);
                }
            }
        }
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}