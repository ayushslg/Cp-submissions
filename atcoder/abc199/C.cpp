#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()

inline void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1="",s2="";
    f(n)
    s1+=s[i];
    rep(i,n,2*n)
    s2+=s[i];
    ll q;
    cin>>q;
    ll t,a,b;
    f(q)
    {
        cin>>t>>a>>b;
        --a,--b;
        if(t==2)
        {
            s1.swap(s2);
        }
        else
        {
            if(b<n)
            {
                char ch=s1[a];
                s1[a]=s1[b];
                s1[b]=ch;
            }
            else if(a<n)
            {
                char ch=s1[a];
                //cout<<ch<<endl;
                s1[a]=s2[b-n];
                s2[b-n]=ch;
            }
            else
            {
                a-=n,b-=n;
                char ch=s2[a];
                s2[a]=s2[b];
                s2[b]=ch;
            }
        }
        //cout<<s1<<s2<<endl;
   
    }
    cout<<s1<<s2<<endl;
    
}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}