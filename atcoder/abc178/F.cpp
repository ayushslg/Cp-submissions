#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
int main() {
    
    
    Imposter
    
    
	int n;
	cin >> n;
	vector<int> A(n), B(n);
	map<int, int> ANum, BNum;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		ANum[A[i]]++;
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
		BNum[B[i]]++;
	}
	for (int i = 0; i <= n; i++) {
		if (ANum.find(i) == ANum.end() || BNum.find(i) == BNum.end()) continue;
		if (ANum[i] + BNum[i] > n) {
			cout << "No" << endl;
			return 0;
		}
	}
	int j = 0, bef = -1;
	for (int i = 0; i < n; i++) {
		if (bef != A[i]) j = 0;
		if (A[i] == B[i]) {
			while (j < n) {
				if (A[j] != A[i] && B[j] != A[i]) {
					swap(B[i], B[j]);
					break;
				}
				j++;
			}
		}
		bef = A[i];
	}
	cout << "Yes" << endl;
	for (int b : B) cout << b << " ";
	cout << endl;
}