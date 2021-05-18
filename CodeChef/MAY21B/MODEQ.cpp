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

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vll = vector<ll>;
using vch = vector<char>;

void solve()
{
    ll n, m , ans = 0;
    cin >> n >> m;
    for (ll b = 1; b <= n; b++)
    {
        for (ll a = 1; a < b; a++)
        {
            if((m % b) % a == (m % a) % b){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}