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
    int n , count0 = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if (s[i] == '0')
        {
            count0++;
        }
    }
    if(count0 == 1)
        cout << "BOB\n";
    else if(count0 % 2 == 1)
        cout << "ALICE\n";
    else
        cout << "BOB\n";
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