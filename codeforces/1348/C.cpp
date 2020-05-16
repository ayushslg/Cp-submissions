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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(all(s));
        if(k==1)
        cout<<s<<endl;
        else if(k==n)
        cout<<s[n-1]<<endl;
        else if(s[0]!=s[k-1])
        cout<<s[k-1]<<endl;
        else
        {
            if(s[k]==s[n-1])
            {
                string ans="";
                ans+=s[0];
                for(ll i=0;i<(n-1)/k;i++)
                ans+=s[n-1];
                cout<<ans<<endl;
            }
            else{
                string ans="";
                ans+=s[0];
                for(ll i=k;i<n;i++)
                ans+=s[i];
                cout<<ans<<endl;
            }
        }
    }
    
    return 0;
}