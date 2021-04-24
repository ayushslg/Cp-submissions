#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
inline void solve()
{
    i64 n;
    cin>>n;
    vector<i64>a(n+1);i64 fir=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        fir=fir^a[i];
    }
    i64 sec=0,cnt=0;
    for(int i=n;i>=0;i--)
    {
        sec=sec^a[i];
        sec==fir? cnt++,sec=0:0;
    }
    cout<<(cnt>1?"YES":"NO")<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();  
    }
    return 0;
}