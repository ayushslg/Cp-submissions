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
    
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m;
        cin>>n>>m;ll a,b,c,maxt=m,mint=m,prev=0,flag=0;
        f(n)
        {
            cin>>a>>b>>c;
            maxt+=a-prev;
            mint-=a-prev;
            prev=a;
            if(c<mint or maxt<b)
            flag=1;
            maxt=min(c,maxt);
            mint=max(mint,b);
            
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}