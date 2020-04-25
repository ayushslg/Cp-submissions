#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define endl "\n"
#define all(x) x.begin(),x.end()
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    
      Imposter
      
      
    ll t;
    cin >> t;
    while(t--){
        ll i,a,b,c,A,B,C,n,s1,s2,s3;
        cin >> a >> b >> c >> n;
        s1=a+b+c+n-3*a;
        s2=a+b+c+n-3*b;
        s3=a+b+c+n-3*c;
        if(s1>=0 && s2>=0 && s3>=0 && s1%3==0 && s2%3==0 && s3%3==0){
            cout << "YES" <<endl;
            
        }
        else { 
            cout << "NO"<<endl;
        }
}
}