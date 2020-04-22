#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
int n,m,arr[200010];
ll cnt[200010];
int main()
{
	 Imposter
	 
	 
	cin>>n>>m;
	f(n) cin>>arr[i];
	sort(arr,arr+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		cnt[i%m]+=arr[i];
		ans+=cnt[i%m];
		cout<<ans<<' ';
	}
	cout<<endl;
	return 0;
}
 	  	   