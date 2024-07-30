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
vector<ll> a;
vector<ll> dp(N,-1);
ll frog(ll i,ll sum){
    if(i >= n-1){
        if(i == n-1){
            return sum;
        }
        return INT_MAX;
    }
    if(dp[i] != -1) return dp[i] + sum;
    ll sum1 = INT_MAX;
    ll sum2 = INT_MAX;
    if(i < n-1) sum1 = frog(i+1,sum+abs(a[i]-a[i+1]));
    if(i < n-2) sum2 = frog(i+2,sum+abs(a[i]-a[i+2]));
    dp[i] = min(abs(sum1-sum),abs(sum2-sum));
    return min(sum1,sum2);
}
Infinite Void() {
    cin >> n;
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
