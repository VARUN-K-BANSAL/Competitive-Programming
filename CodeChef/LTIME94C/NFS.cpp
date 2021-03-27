#include <iostream>
using namespace std;

int main()
{

    long int t;
    cin >> t;
    while (t--)
    {
        long int u, v, a, s;
        cin >> u >> v >> a >> s;
        if ((u * u + 2 * a * s) <= v*v)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}