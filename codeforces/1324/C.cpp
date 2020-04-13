#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;vll ans;
        ans.pb(0);
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='R')
            ans.pb(i+1);
        }
        ans.pb(s.length()+1);ll max=0;
        for(ll i=0;i<ans.size()-1;i++)
        {
            if(ans[i+1]-ans[i]>max)
            max=ans[i+1]-ans[i];
        }
        cout<<max<<endl;
    }
    
    return 0;
}