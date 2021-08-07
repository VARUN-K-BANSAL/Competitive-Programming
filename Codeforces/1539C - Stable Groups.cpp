// link -- https://codeforces.com/problemset/problem/1539/C

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
    ll n, k ,x;
    cin >> n >> k >> x;
    vll v, diff;
    for(ll i=0; i<n; i++)
    {
        ll temp;
        cin >> temp;
        v.pb(temp);
    }
    sort(v.begin(), v.end());

    for (ll i = 0; i < n; i++)
    {
        if(v[i] - v[i-1] > x)
        {
            diff.pb(v[i]-v[i-1]);
        }
    }
    sort(diff.begin(), diff.end());
    
    ll numberOfGroups = 1;

    for(auto i : diff)
    {
        ll temp = (i - 1) / x;
        if(k < 0 || temp > k)
        {
            numberOfGroups++;
            continue;
        }
        else
        {
            k -= temp;
        }
    }
    
    cout << numberOfGroups << endl;
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