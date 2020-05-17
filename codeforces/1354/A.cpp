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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>=a)
        cout<<b<<endl;
        else if(d>=c)
        cout<<-1<<endl;
        else
        {
            ll i=0;
            ll temp=b;
            if(c!=d)
            {
            if((a-temp)%(c-d)==0)
            i=(a-temp)/(c-d);
            else
            i=((a-temp)/(c-d))+1;
            }
            cout<<b+(i*c)<<endl;
        }
    }
    return 0;
}