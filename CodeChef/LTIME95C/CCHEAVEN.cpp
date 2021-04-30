#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll l, CountOne = 0, CountZero = 0;
        int flag = 0;
        string s, s1;
        cin >> l;
        cin >> s;
        for (ll i = 0; i < l; i++)
        {
            if (s[i] == '1')
                CountOne++;
            else
                CountZero++;
            if (CountOne >= CountZero)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}