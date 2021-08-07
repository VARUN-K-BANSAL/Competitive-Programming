// Link -- https://codeforces.com/problemset/problem/1547/C

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
    int k, n, m;
    cin >> k >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int ptra = 0, ptrb = 0;
    vi result;
    while(ptra != n || ptrb != m)
    {
        if(a[ptra] == 0 && ptra != n)
        {
            result.pb(a[ptra]);
            ptra++;
            k++;
        }
        else if(b[ptrb] == 0 && ptrb != m)
        {
            result.pb(b[ptrb]);
            ptrb++;
            k++;
        }
        else if(a[ptra] <= k && ptra != n)
        {
            result.pb(a[ptra]);
            ptra++;
        }
        else if(b[ptrb] <= k && ptrb != m)
        {
            result.pb(b[ptrb]);
            ptrb++;
        }
        else 
        {
            cout << "-1\n";
            return;
        }
    }
    
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
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