/*
 Link --> https://www.codechef.com/MAY21B/problems/XOREQUAL
*/
#include <iostream>
using namespace std;

typedef long long ll;
#define MOD 1000000007
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n";

ll solve(ll x, ll y)
{
    ll result = 1;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % MOD;

        y /= 2;
        x = (x * x) % MOD;
    }
    return result;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while(t--){
        ll n , ans;
        cin >> n;
        ans = solve(2,n-1);
        cout << ans << endl;
    }

    return 0;
}