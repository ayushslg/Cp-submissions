#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define fast ios_base::sync_with_stdio(false)
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll b(n);
        for(ll i=0;i<n;i++)
        cin>>b[i];
        bool check;
        check=true;
        vb v(2*n+1);
        for(ll i=0;i<n;i++)
        v[i]=false;
        for(ll i=0;i<n;i++)
        {
            if(!v[b[i]])
            v[b[i]]=true;
            else
            check=false;
        }
        vll a(2*n);
        for(ll i=0;i<n;i++)
        {
            ll j;
            a[2*i]=b[i];
            for( j=b[i]+1;j<=2*n;j++)
            {
                if(!v[j])
                {
                    v[j]=true;
                    a[2*i+1]=j;
                    break;
                }
            }
            if(j>2*n)
            check=false;
            if(!check)
            break;
        }
        if(check)
        {
            for(ll i=0;i<2*n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
            
        }
        else
        cout<<-1<<endl;
        
    }
    return 0;
}