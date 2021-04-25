#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        int temp = 0;
        temp = ((x / xr) < (y / yr)) ? (x / xr) : (y / yr);
        if (temp >= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}