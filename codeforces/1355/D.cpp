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
    

        ll n,s;
        cin>>n>>s;
        if(2*n>s)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            f(n-1)
            cout<<2<<" ";
            cout<<s-(2*(n-1))<<endl;
            cout<<1<<endl;
        }
    return 0;
}