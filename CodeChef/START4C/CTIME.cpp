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
#define endl "\n"

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
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
    ll n , k , f , prevTime = 0 , avaTime = 0;
    cin >> n >> k >> f;
    ll t1 = 0 , t2 = 0;
    vpll a(n);
    for(ll i=0; i<n; i++){
        cin >> t1 >> t2;
        a[i] = {t1,t2};
    }
    sort(a.begin(), a.end());
    avaTime = a[0].first;
    prevTime = a[0].second;

    for(ll i=0; i<n; i++){
        if(a[i].first > prevTime)
            avaTime += a[i].first - prevTime;
        prevTime = (prevTime < a[i].second) ? a[i].second : prevTime;
    }
    avaTime += f - prevTime;
    if(avaTime >= k)
        cout << "YES\n";
    else
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

    return 0;
}