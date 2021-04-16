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
        ll p, q;
        cin >> p >> q;
        ll temp = 0;
        while ((p != 0) && (q != 0))
        {
            if (p > q)
            {
                p = p - q;
                temp++;
            }
            else
            {
                q = q - p;
                temp++;
            }
        }
        cout << temp << endl;
    }
    return 0;
}