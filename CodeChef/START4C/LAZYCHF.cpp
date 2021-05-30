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
    ll x , m , d;
    cin >> x >> m >> d;
    if(m*x - x < d){
        cout << m*x << endl;
    }
    else{
        cout << min(m*x , x + d) << endl;
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

    return 0;
}