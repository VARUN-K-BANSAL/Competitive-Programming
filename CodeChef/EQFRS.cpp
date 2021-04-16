#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll CheckGcd(ll a[], ll n)
{
    ll result = a[0];
    for (ll i = 1; i < n; i++)
    {
        result = gcd(a[i], result);
        if (result == 1)
            return 1;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll GCD = CheckGcd(a, n);
        cout << GCD << endl;
    }
    return 0;
}