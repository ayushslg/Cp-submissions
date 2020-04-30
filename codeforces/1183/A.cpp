#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{


Imposter

ll n;
cin>>n;
ll a=n;
ll sum=0;
while(true)
{
sum=0;
while(n>0)
{
sum+=n%10;
n/=10;
}
if(sum%4==0)
{
cout<<a<<endl;
return 0;
}
  a++;
  n=a;
  }
}