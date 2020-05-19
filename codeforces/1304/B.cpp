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
    
        ll n,m;
        cin>>n>>m;set<string> st;
        string s,t,p="",ans="",r="";
        f(n)
        {
            cin>>s;
            t=s;
            reverse(all(t));
            if(s==t)p=t;
            else if(st.count(t))ans+=s;
            st.insert(s);
        }
        r=ans;
        reverse(all(r));
        ans=ans+p+r;
        cout<<ans.size()<<endl<<ans<<endl;
        
    return 0;
}