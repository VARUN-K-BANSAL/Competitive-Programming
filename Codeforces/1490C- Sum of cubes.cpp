// Link -- https://codeforces.com/problemset/problem/1490/C

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
using vpll = vector<pair<ll , ll>>;
using vch = vector<char>;
using usi = unordered_set<int>;
using usl = unordered_set<ll>;

int pos[3000005] = {0};
int neg[3000005] = {0};

void debug_code(){
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
    usl cube;
    for(ll i=1; i*i*i<=n; i++)
    {
        cube.insert(i*i*i);
    }
    for(ll i=1; i*i*i<=n; i++)
    {
        if(cube.count(n - i*i*i))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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