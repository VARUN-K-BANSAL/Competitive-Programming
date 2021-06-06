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
#define inf 1e9+7
#define INF 1e18+7

ll MOD = 1e9 + 7;
using pll = pair<ll , ll>;
using mll = map<ll, ll>;
using mi = map<int, int>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pll>;
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int suma[n] , sumb[n] , min = 99999;
    suma[0] = a[0];
    sumb[n-1] = a[n-1];
    for (int i = 1 ; i < n; i++)
    {
        suma[i] = suma[i-1] + a[i];
    }
    for (int i = n-2; i>=0; i--)
    {
        sumb[i] = sumb[i+1] + a[i];
    }

    for(int i=0; i<n-1; i++){
        int temp = abs(suma[i] - sumb[i+1]);
        min = (temp < min) ? temp : min;
    }
    cout << min << endl;
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