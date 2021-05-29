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
    ll n , sum = 0;
    ll maxCapacity1 = 0 , maxCapacity2 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        ll temp;
        cin >> temp;
        sum += temp;
    }

    for (int i = 0; i < n; ++i){
        ll temp;
        cin >> temp;
        if(temp > maxCapacity1){
            maxCapacity2 = maxCapacity1;
            maxCapacity1 = temp;
        }
        else if(temp > maxCapacity2){
            maxCapacity2 = temp;
        }
    }
    
    if (maxCapacity1 + maxCapacity2 >= sum){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    debug_code();
    solve();

    return 0;
}