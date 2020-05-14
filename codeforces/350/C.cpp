#include<bits/stdc++.h>
using namespace std;
#define ll int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()

ll sort_karo(pair<ll,ll> x,pair<ll,ll> y)
{
    if((abs(x.first)+abs(x.second)) < (abs(y.first)+abs(y.second)))
		return 1;
	return 0;
}
int main()
{
    
    Imposter
    
    ll n;vector<pair<ll,ll>>vec;
    cin>>n;ll ans=0;
    f(n)
    {
        ll x,y;
        cin>>x>>y;
        vec.pb(make_pair(x,y));
        if(x!=0) ans+=2;
        if(y!=0) ans+=2;
    }
    ans+=n*2;
    cout<<ans<<endl;
    sort(vec.begin(),vec.end(),sort_karo);
    for(ll i=0;i<n;i++)
    {
        if(vec[i].first>0)
        cout<<1<<" "<<(vec[i].first)<<" "<<"R"<<endl;
        else if(vec[i].first<0)
        cout<<1<<" "<<-(vec[i].first)<<" "<<"L"<<endl;
        if(vec[i].second>0)
        cout<<1<<" "<<(vec[i].second)<<" "<<"U"<<endl;
        else if(vec[i].second<0)
        cout<<1<<" "<<-(vec[i].second)<<" "<<"D"<<endl;
        cout<<2<<endl;
        if(vec[i].first>0)
        cout<<1<<" "<<(vec[i].first)<<" "<<"L"<<endl;
        else if(vec[i].first<0)
        cout<<1<<" "<<-(vec[i].first)<<" "<<"R"<<endl;
        if(vec[i].second>0)
        cout<<1<<" "<<(vec[i].second)<<" "<<"D"<<endl;
        else if(vec[i].second<0)
        cout<<1<<" "<<-(vec[i].second)<<" "<<"U"<<endl;
        cout<<3<<endl;
    }
    return 0;
}