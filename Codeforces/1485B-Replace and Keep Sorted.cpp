#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define clr(x) memset(x, 0, sizeof(x))
#define endl "\n"
#define inf 1e9+7
#define INF 1e18+7

ll MOD = 1e9 + 7;
using pll = pair<ll , ll>;
using mll = map<ll, ll>;
using mi = map<int, int>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pll>;
using vch = vector<char>;

void debug_code(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    /*
    x < al ==> count -> al - 1
    x > ar ==> count -> k - ar
    al < x < ar ==> count -> (ar-al+1)-(r-l+1)
    total = k + (ar-al+1) - 2(r-l+1)
    */
    ll n , q , k , ans = 0;
    cin >> n >> q >> k;
    vll a;
    for (int i = 0; i < n; ++i){
        ll temp;
        cin >> temp;
        a.pb(temp);
    }
    for(ll i=0; i<q; i++){
        ll l , r;
        cin >> l >> r;
        ans = k + a[r-1] - a[l-1] - 2*r + 2*l - 1;
        cout << ans << endl;
    }
}

int main()
{
    debug_code();
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}