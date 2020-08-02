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
#define rep(i,a,b) for(i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
const int MAX = 1000001; 
  
// structure to store queries 
struct Query 
{ 
    int l, r, idx; 
}; 
  
// cmp function to sort queries according to r 
bool cmp(Query x, Query y) 
{ 
    return x.r < y.r; 
} 
  
// updating the bit array 
void update(int idx, int val, int bit[], int n) 
{ 
    for (; idx <= n; idx += idx&-idx) 
        bit[idx] += val; 
} 
  
// querying the bit array 
int query(int idx, int bit[], int n) 
{ 
    int sum = 0; 
    for (; idx>0; idx-=idx&-idx) 
        sum += bit[idx]; 
    return sum; 
} 
  
void answeringQueries(int arr[], int n, Query queries[], int q) 
{ 
    // initialising bit array 
    int bit[n+1]; 
    memset(bit, 0, sizeof(bit)); 
  
    // holds the rightmost index of any number 
    // as numbers of a[i] are less than or equal to 10^6 
    int last_visit[MAX]; 
    memset(last_visit, -1, sizeof(last_visit)); 
  
    // answer for each query 
    int ans[q]; 
    int query_counter = 0; 
    for (int i=0; i<n; i++) 
    { 
        // If last visit is not -1 update -1 at the 
        // idx equal to last_visit[arr[i]] 
        if (last_visit[arr[i]] !=-1) 
            update (last_visit[arr[i]] + 1, -1, bit, n); 
  
        // Setting last_visit[arr[i]] as i and updating 
        // the bit array accordingly 
        last_visit[arr[i]] = i; 
        update(i + 1, 1, bit, n); 
  
        // If i is equal to r of any query  store answer 
        // for that query in ans[] 
        while (query_counter < q && queries[query_counter].r == i) 
        { 
            ans[queries[query_counter].idx] = 
                     query(queries[query_counter].r + 1, bit, n)- 
                     query(queries[query_counter].l, bit, n); 
            query_counter++; 
        } 
    } 
  
    // print answer for each query 
    for (int i=0; i<q; i++) 
        cout << ans[i] << endl; 
} 
  
// driver code 
int main() 
{ 
    int n,q;
    cin>>n>>q;
    int a[n];
    input(a,n);
    Query queries[q];
    f(q)
    {
        int x,y;
        cin>>x>>y;
        y--,x--;
        queries[i].l=x;
        queries[i].r=y;
        queries[i].idx=i;
    }
    sort(queries, queries+q, cmp); 
    answeringQueries(a, n, queries, q); 
    return 0; 
} 