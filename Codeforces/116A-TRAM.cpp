/*
* link = https://codeforces.com/problemset/problem/116/A
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, max = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        count -= a;
        count += b;
        if (count > max)
            max = count;
    }
    cout << max << "\n";

    return 0;
}