#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define MOD 1000000007

ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
{
    fast;

    fstream fout;
    fout.open("test.txt");

    ll t;
    cin >> t;
    while (t--)
    {
        ll k, ans = 0;
        // cin >> k;
        for (k = 1; k < 10000; k++)
        {
            for (ll i = 1; i < 2 * k + 1; i++)
            {
                ans += GCD(k + i * i, k + (i + 1) * (i + 1));
            }
            fout << ans << endl;
        }
    }
    fout.close();
    return 0;
}