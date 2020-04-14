#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
int main()
{

        ll n;
        cin>>n;
        ll r[n],p[n],c=0,d=0,e=0;
        for(ll i=0;i<n;i++)
        cin>>r[i];
        for(ll i=0;i<n;i++)
        cin>>p[i];
        for(ll i=0;i<n;i++)
        {
            if(r[i]==p[i])
            c++;
            else if(r[i]==1)
            d++;
            else if(p[i]==1)
            e++;
        }
        if(c==n)
        cout<<-1<<endl;
        else if(d>e)
        cout<<1<<endl;
        else 
        {
            if (d==0)
            cout<<-1<<endl;
            else if(e%d==0)
            cout<<(e/d)+1<<endl;
            else
            {
                ll q=e/d;
                cout<<q+1<<endl;
            }
        }

    
    return 0;
}