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

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pair<ll, ll>>;
using vch = vector<char>;
using usi = unordered_set<int>;
using usl = unordered_set<ll>;
using si = set<int>;

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
    ll n, k;
    cin >> n >> k;

    vll a;
    for(ll i=0; i<n; i++)
    {
        ll temp;
        cin >> temp;
        a.pb(temp);
    }

    sort(a.begin(), a.end());

    for(ll i=0; i<k; i++)
    {
        if(a[i] < 0)
        {
            a[i] = -1*a[i];
        }
    }

    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            ans += a[i];
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