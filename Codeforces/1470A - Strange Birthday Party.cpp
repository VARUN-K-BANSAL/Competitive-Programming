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
using pi = pair<int , int>;
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
    ll n , m , ans = 0 , temp = 1;
    cin >> n >> m;
    ll k[n] , c[m];

    for(ll i=1; i<=n; i++){
        cin >> k[i];
    }
    sort(k+1 , k+n+1);

    for(ll i=1; i<=m; i++){
        cin >> c[i];
    }

    for(ll i=n; i>0; i--){
        if(temp > k[i]){
            ans += c[k[i]];
        }
        else{
            ans += c[temp];
            temp++;
        }
    }

    cout << ans << endl;
}

int main()
{
    debug_code();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    // solve();

    return 0;
}