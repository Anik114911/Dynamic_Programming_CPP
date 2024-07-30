#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const ll N = 105;
const ll W = 1e5 + 5;
ll n,w;
vector<ll> a,weight;
ll dp[N][W];
ll knapsack(ll i, ll w){
    if(i >= n || w <= 0) return 0;
    if(dp[i][w] != -1) return dp[i][w];
    if(weight[i] <= w){
        ll sum1 = knapsack(i+1,w-weight[i]) + a[i];
        ll sum2 = knapsack(i+1,w);
        return dp[i][w] = max(sum1,sum2);
    }
    else return dp[i][w] = knapsack(i+1,w);
}
Infinite Void() {
    cin >> n >> w;
    for(ll i=0;i<N;i++){
        for(ll j=0;j<W;j++) dp[i][j] = -1;
    }
    for(ll i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        weight.push_back(x);
        a.push_back(y);
    }
    cout << knapsack(0,w) << endl;
}
e4{
    fst ll t = 1;
    // cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
