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
    string s,t;
    cin>>s>>t;
    ll i=s.length();ll cnt=0;
    ll j=t.length();
    while(1)
    {
        ll i=s.length()-cnt-1;
        ll j=t.length()-cnt-1;
        if(i>=0 && j>=0 && s[i]==t[j])
        cnt++;
        else
        break;
        
    }
    cout<<s.length()+t.length()-2*cnt<<endl;
    
    
    return 0;
}