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
    int k, l, m, n, d, count=0;
    cin >> k >> l >> m >> n >> d;
    int a[d+1];
    clr(a);
    for(int i=k; i<=d; i+=k) {
        a[i] = 1;
    }
    for(int i=l; i<=d; i+=l) {
        a[i] = 1;
    }
    for(int i=m; i<=d; i+=m) {
        a[i] = 1;
    }
    for(int i=n; i<=d; i+=n) {
        a[i] = 1;
    }
    for(int i=1; i<=d; i++) {
        if(a[i] == 0) {
            count++;
        }
    }
    cout << d-count << endl;
}

int main()
{
    debug_code();

    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}