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
        ll n, rem, row, ans = 0;
        cin >> n;
        rem = n % 4;
        row = n / 4;
        if (n == 1)
            ans = 20;
        else if (n == 2)
            ans = 2 * (6 + 5 + 4 + 3);
        else if (n == 3)
            ans = 2 * (6 + 5 + 4 + 3) + (6 + 5 + 4);
        else if (n >= 4)
        {
            switch (rem)
            {
            case 0:
                ans = 4 * (6 + 5) * row + 4 * 4;
                break;

            case 1:
                ans = 4 * (6 + 5) * row + 3 * 4 + (6 + 5 + 4 + 3 + 2);
                break;
            case 2:
                ans = 4 * (6 + 5) * row + 2 * 4 + 2 * (6 + 5 + 4 + 3);
                break;
            case 3:
                ans = 4 * (6 + 5) * row + 4 + 2 * (6 + 5 + 4 + 3) + (6 + 5 + 4);
                break;
            }
        }
        cout << ans << endl;
    }
        return 0;
}