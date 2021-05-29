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

void debug_code()
{
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    ll n , k , x;
    cin >> n >> k >> x;
    ll a[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }

    ll sum = 0;
    for (ll i = n - 1; i > n- k - 1; i--)
        a[i] = x;
    for (ll i = 0; i < n; i++)
        sum += a[i];

    cout << sum << endl;
}

int main()
{
    debug_code();
    solve();

    return 0;
}