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
    ll n , y , count = 0;
    cin >> n >> y;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    for(ll i=0; i<=n-y; i++){
        int flag = 0;
        if(a[i] == y){
            for(ll j=i+1; j<i+y; j++){
                if(a[j] != a[j-1] - 1){
                    flag = 1;
                    break;
                }
            }
            if(flag != 1)
                count++;
        }
    }
    cout << count << endl;
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