#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
// using namespace __gnu_pbds;
typedef uint64_t ull;
typedef long long ll;
typedef vector<ll> v;
typedef vector<vector<ll>> vv;
typedef vector<string> vs;
typedef vector<pair<ll, ll>> vpr;
typedef vector<bool> vb;
typedef vector<long double> vd;
typedef long double ld;
#define int long long
#define se second
#define fi first
#define pb push_back
#define endl "\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) x.size()
#define in(x, n)                                                                                                       \
    for (ll i = 0; i < n; i++)                                                                                         \
    cin >> x[i]
#define tc                                                                                                             \
    ll t;                                                                                                              \
    cin >> t;                                                                                                          \
    while (t--)
typedef pair<ll, ll> pi;
const v dx = {1, -1, 0, 0};
const v dy = {0, 0, 1, -1};
const ld PI = 2 * acos(0.0);
ll cel(ll x1, ll y1) {
    if ((x1 % y1) == 0)
        return x1 / y1;
    else
        return x1 / y1 + 1;
}
ll power(ll a, ll b, ll m) {
    if (b == 0)
        return 1ll;
    ll d = power(a, b / 2, m);
    d = (d * d) % m;
    if (b & 1)
        d = (d * a) % m;
    return d;
}
const ll mod = 1e9 + 7;
// const ll mod = 998244353;
int MOD(int a) {
    if (a < 0)
        a += mod;
    if (a >= mod)
        a %= mod;
    return a;
}

#ifdef ONLINE_JUDGE
#define error(args...) 0
#else
#define error(args...)                                                                                                 \
    {                                                                                                                  \
        string _s = #args;                                                                                             \
        replace(_s.begin(), _s.end(), ',', ' ');                                                                       \
        stringstream _ss(_s);                                                                                          \
        istream_iterator<string> _it(_ss);                                                                             \
        err(_it, args);                                                                                                \
    }
#endif
void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << "[ " << *it << " = " << a << " ]" << endl;
    err(++it, args...);
}

// set_name.find_by_order(k) It returns to an iterator to the kth element
// (counting from zero) in the set in O(logn) time set_name.order_of_key(k) It
// returns to the number of items that are strictly smaller than our item k in
// O(logn) time.
/*string operations :
str.substr (x,y) : returns a substring str[x],str[x+1],...str[x+y-1]
str.substr (x) : returns a substring str[x],... end of string
str.find(qtr) : returns the first occurenece of qtr in str */
// __builtin_popcount(x)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    return 0;
}