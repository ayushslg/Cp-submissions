#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
bool compare(string &s1,string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    fast;
    cin.tie(0);
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++)
    cin>>s[i];
    sort(s,s+n,compare);
    for(ll i=0;i<n-1;++i)
    {
        if(s[i+1].find(s[i]) == string::npos)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(auto it: s)
    cout<<it<<endl;
    return 0;
}