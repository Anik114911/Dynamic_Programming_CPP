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
const ll N = 1e5 + 5;
ll n;
vector<vector<ll>> a;
vector<vector<ll>> dp(N,vector<ll>(3,-1));
ll max_score(ll i, ll selected){
    if(i >= n) return 0;
    if(selected != -1 && dp[i][selected] != -1) return dp[i][selected];
    ll mx = INT_MIN;
    for(ll j=0;j<3;j++){
        if(j == selected) continue;
        ll s = max_score(i+1,j);
        mx = max(mx,(a[i][j]+s));
        if(selected != -1) dp[i][selected] = mx;
    }
    return mx;
}
Infinite Void() {
    cin >> n;
    for(ll i=0;i<n;i++){
        vector<ll> v;
        for(ll j=0;j<3;j++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        a.push_back(v);
    }
    cout << max_score(0,-1) << endl;
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
