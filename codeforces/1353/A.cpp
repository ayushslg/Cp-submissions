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


int main()
{
    
    Imposter
    
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       if(n==1)
       cout<<0<<endl;
       else if(n==2)
       cout<<m<<endl;
       else
       cout<<m*2<<endl;
    }
    return 0;
}