#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

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
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
        cout << "NO\n";
    else if (a == b || a == b + 1 || b == a + 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    debug_code();
    solve();

    return 0;
}