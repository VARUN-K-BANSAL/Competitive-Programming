// Link -- https://www.codechef.com/AUG21B/problems/PROBDIFF

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

void debug_code(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if(a1 == a2 && a2 == a3 && a3 == a4)
    {
        cout << "0\n";
        return;
    }
    else if((a1 != a2 && a3 != a4) || (a1 != a3 && a2 != a4) || (a1 != a4 && a2 != a3))
    {
        cout << "2\n";
        return;
    }
    else
    {
        cout << "1\n";
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