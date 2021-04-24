#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
const int maxm=200009;i64 mod=1e9 + 7;
i64 dp[maxm];
void calc()
{
    for(int i=0;i<9;i++) dp[i]=2;
    dp[9]=3;
    for(int i=10;i<maxm;i++)
    {
        dp[i]=(dp[i-9]+dp[i-10])%mod;
    }

}
inline void solve()
{
    i64 n,m;
    cin>>n>>m;
    i64 ans=0;
    while(n>0)
    {
        i64 x=n%10;
        if(m+x<10)
            ans+=1;
        else
            ans+=dp[m+x-10];
        ans=ans%mod;
        n=n/10;
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    calc();
    cin>>t;
    while(t--)
    {
        solve();  
    }
    return 0;
}