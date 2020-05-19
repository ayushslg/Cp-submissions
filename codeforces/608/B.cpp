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
    string a,b;
    cin>>a;
    cin>>b;
   int n=a.length();
    int m=b.length();
    int t[m+1],s[n+1];
    for (int i=0;i<n;i++) s[i+1]= a[i]-'0';
    for (int i=0;i<m;i++) t[i+1]= b[i]-'0';
    int p[m+1]; p[0]=0;
    for (int i=1;i<=m;i++){
        p[i]=t[i]+p[i-1];
    }
    long long ans=0;
    for (int i=1;i<=n;i++){
        int x=p[m-n+i]-p[i-1];
        if (s[i]==0) ans+=x*1ll;
        else ans+=(m-n-x+1)*1ll;
    }
    cout<<ans;
    return 0;
}