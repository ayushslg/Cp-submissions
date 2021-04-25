#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define ld long double
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
const int N=26;
int adj[N][N];
string ans;
int vis[N];
void dfs(int c)
{
    char ch='a'+c;
    ans+=ch;
    vis[c]=1;
    for(int i=0;i<26;i++)
    {
        if(adj[i][c] and !vis[i])
        {
            dfs(i);
            return;
        }
    }
}
inline void solve()
{
    string s;
    cin>>s;
    ans.clear();
    int cnt[26];
    for(int i=0;i<26;i++)
    {
        vis[i]=0,cnt[i]=0;
        for(int j=0;j<26;j++)
            adj[i][j]=0;
    }
    int c=0;
    for(int i=1;i<s.length();i++)
    {
        int u=(s[i]-'a'),v=(s[i-1]-'a');
        if(!adj[u][v])
        {
            c++;
            adj[u][v]=1;
            adj[v][u]=1;
            cnt[u]++,cnt[v]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]==1)
        {
            dfs(i);
            break;
        }
    }
    if(c>0 and (c+1)!=ans.length())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<ans;
        for (int i=0;i<26;i++) {
            if (!vis[i]) {
                char ch='a'+i;
                cout<<ch;
            }
        }
        cout<<endl;
    }

}
int main()
{
    Imposter
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}