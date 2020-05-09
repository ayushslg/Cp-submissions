#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 
 
int main()
{
      
      
       Imposter
       
       
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1||n==2||n==3)
        cout<<-1<<endl;
        else 
        {
            for(ll i=n-(n%2==0);i>=1;i-=2)
			cout<<i<<" ";
		cout<<"4 2 ";
		for(ll i=6;i<=n;i+=2)
			cout<<i<<" ";
		cout<<endl;
        }

    }
    return 0;
}