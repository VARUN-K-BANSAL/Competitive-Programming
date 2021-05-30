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
#define bg begin
#define clr(x) memset(x, 0, sizeof(x))
#define endl "\n"

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vll = vector<ll>;
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
    ll n , m , k;
    cin >> n >> m >> k;
    ll a[k] , max = 0;
    for(ll i=0; i<k; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
    }

    ll b[max+1] = {0};
    for (ll i = 0; i < k; ++i)
        b[a[i]]++;

    ll ans[k] = {0};
    ll j = 0;
    for(ll i=0; i<=max; i++){
        if(b[i] > 1 && !(i >= n + 1 && i <= n + m)){
            ans[j] = i;
            j++;
        }
    }
    cout << j << " ";
    for(ll i=0; i<j; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    debug_code();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}