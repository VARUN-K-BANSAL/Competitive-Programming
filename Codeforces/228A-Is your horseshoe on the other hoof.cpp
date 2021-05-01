/*
* link = https://codeforces.com/problemset/problem/228/A
*/

#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll s1, s2, s3, s4, ans = 1;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 != s2)
    {
        if (s1 != s3)
        {
            if (s1 != s4)
                ans++;
        }
    }
    else if (s2 != s3)
    {
        if (s2 != s4)
            ans++;
    }
    else if (s3 != s4)
        ans++;

    cout << 4 - ans << "\n";

    return 0;
}