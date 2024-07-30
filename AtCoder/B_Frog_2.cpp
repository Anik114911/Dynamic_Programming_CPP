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
ll n,k;
const ll N = 1e5 + 5;
vector<ll> a,dp(N,-1);
ll frog(ll i, ll sum){
    if(i >= n) return INT_MAX;
    if(i == n-1) return sum;
    if(dp[i] != -1) return dp[i] + sum;
    ll mn = INT_MAX;
    for(ll j=1;j<=k && j+i<n;j++){
        ll sums = frog(i+j,sum+abs(a[i]-a[i+j]));
        mn = min(mn,sums);
        dp[i] = abs(mn-sum);
    }
    return mn;
}
Infinite Void() {
    cin >> n >> k;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    cout << frog(0,0) << endl;
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

