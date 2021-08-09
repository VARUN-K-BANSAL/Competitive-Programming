// Link -- https://codeforces.com/contest/1557/problem/A

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
    double ans = -1e12;
    ll a[n], prefixSum[n], maxValue = ans;
    cin >> a[0];
    prefixSum[0] = a[0];
    maxValue = max(maxValue, a[0]);
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        maxValue = max(maxValue, a[i]);
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    double avg1 = (double) maxValue;
    double avg2 = (double) (prefixSum[n-1] - maxValue)/(n-1);
    ans = max(ans, avg1+avg2);
    
    cout << fixed << setprecision(9) << ans << endl;
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