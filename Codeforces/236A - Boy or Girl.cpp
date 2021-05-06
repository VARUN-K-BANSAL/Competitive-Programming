/*
 Link -->   https://codeforces.com/problemset/problem/236/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.length() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";

    return 0;
}