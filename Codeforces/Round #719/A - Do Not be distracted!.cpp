/*
  Link --> https://codeforces.com/contest/1520/problem/A
*/

#include <iostream>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < n; i++)
        m[s[i]] = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && s[i] != s[i - 1] && m[s[i]])
        {
            cout << "NO\n";
            return;
        }
        m[s[i]] = 1;
    }
    cout << "YES\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}