#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        float v, k1, k2, k3;
        cin >> k1 >> k2 >> k3 >> v;
        float temp = (100 / (k1 * k2 * k3 * v));
        temp = temp + 0.005;
        if (temp == 9.58)
        {
            cout << "NO\n";
            return 0;
        }
        if (temp < 9.580)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}