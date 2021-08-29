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
    ll n;
    cin >> n;
    vll a(n), b(n - 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    mll m;
    for (ll i = 0; i < n - 1; i++)
    {
        ll m1 = b[i] - a[i];
        ll m2 = b[i] - a[i + 1];
        if (m1 != m2)
        {
            if (m1 > 0)
                m[m1] += 1;
            if (m2 > 0)
                m[m2] += 1;
        }
        else
        {
            if (m1 > 0)
                m[m1] += 1;
        }
    }
    for (auto iter : m)
    {
        if (iter.ss == n - 1)
        {
            cout << iter.ff << endl;
            break;
        }
    }
}

int main()
{
    debug_code();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();

    return 0;
}