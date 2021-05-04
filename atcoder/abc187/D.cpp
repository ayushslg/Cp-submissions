#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define int long long int
using namespace std;
#define f(n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define input(arr,n) for(int i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<int>
#define vlll vector<int>
#define all(x) x.begin(),x.end()
bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    return((a.first+a.second)<(b.first+b.second));
}
inline void solve()
{
    int n;
    cin>>n;
    long long asum = 0;
    long long bsum = 0;
    vector<long long> add(n);
    for (int i = 0; i < n; i++) {
        long long A, B;
        cin >> A >> B;
        asum += A;
        add.push_back(2 * A + B);
    }
    sort(add.begin(), add.end(), greater<long long>());
    int ans = 0;
    while (asum >= bsum) {
        bsum += add[ans];
        ans++;
    }
    cout << ans << endl;




}
int32_t main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    int i=0;
    while(t--)
    {
        ++i;
        //cout << "Case #" << i << ": " ;
        solve();
        
    }
}