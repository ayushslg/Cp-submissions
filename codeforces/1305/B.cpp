#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 
 
int main()
{
      
      
       Imposter
       
       
    string s;
    cin>>s;vll vec,vec1;ll b=0,c=0,a=0;
    f(s.size())
    {
        if(s[i]=='(')
        a++;
        else
        b++;
    }
    ll temp=0;ll n=s.size();
    if(a>b)
    {
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                ll j;
                for( j=temp;j<i;j++)
                {
                    if(s[j]=='(')
                    {
                        c+=2;
                        vec.pb(i+1);
                        vec.pb(j+1);
                        break;
                    }
                }
                temp=j+1;
                
            }
        }
    }
    
    else if(a<=b)
    {
        for(ll i=0;i<s.size()-1;i++)
        {
            if(s[i]=='(')
            {
                ll j;
                for( j=n;j>i;j--)
                {
                    if(s[j]==')')
                    {
                        c+=2;
                        vec.pb(i+1);
                        vec.pb(j+1);
                        break;
                    }
                }
                n=j-1;
            }
        }
    }
    if(c==0)
    cout<<0<<endl;
    else
    {
        cout<<1<<endl;
        cout<<c<<endl;
        sort(all(vec));
        for(ll i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}