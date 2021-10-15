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
using sc = set<char>;

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
    ll a, b, c;
    cin >> a >> b >> c;
    ll MAX = max(a,max(b,c));
    if(a == b && b == c) {
        cout << "1 1 1\n";
        return;
    }
    if(a == b && b != c && MAX == a) {
        cout << "1 1 " << MAX - c + 1 << endl;
        return;
    }
    if(c == b && a != c && MAX == b) {
        cout << MAX - a + 1 << " 1 1\n";
        return;
    }
    if(a == c && b != c && MAX == c) {
        cout << "1 " << MAX - b + 1 <<  " 1\n";
        return;
    }
    if(MAX == a) {
        cout << "0 " << MAX + 1 - b << " " << MAX + 1 - c << endl;
        return;
    }
    else if(MAX == b) {
        cout << MAX + 1 - a << " 0 " << MAX + 1 - c << endl;
        return;
    }
    else {
        cout << MAX + 1 - a << " " << MAX + 1 - b << " 0\n";
        return;
    }
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