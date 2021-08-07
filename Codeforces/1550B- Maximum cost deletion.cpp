// Link -- https://codeforces.com/problemset/problem/1550/B

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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    // result will be a*n + b*x where x is the number of operations so if b > 0 the operations useful will be x = n (deleting string one by one)
    // when b < 0 x will me equal to |newLen/2| + 1 (i.e., minimum no. operations required to delete the string)
    int newLen = unique(s.begin(), s.end()) - s.begin();
    int result = 0;
    if(b >= 0)
    {
        result = a*n + b*n;
    }
    else 
    {
        result = a*n + b*(newLen/2 + 1);
    }
    cout << result << endl;
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