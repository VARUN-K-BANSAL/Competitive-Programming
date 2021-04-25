#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long int t;
    cin >> t;
    while (t--)
    {
        long int n, m, x, y, a, b;
        cin >> n >> m >> x >> y >> a >> b;
        long int ttime = 0, ptime = 0;
        ttime = m - y + n - x;
        ptime = ((m - b) > (n - a)) ? (m - b) : (n - a);
        if (ttime > ptime)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}