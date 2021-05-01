/*
* link = https://codeforces.com/problemset/problem/339/A
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 0; s[i] != '\0'; i += 2)
    {
        if (s[i] == '1')
            n1++;
        else if (s[i] == '2')
            n2++;
        else if (s[i] == '3')
            n3++;
    }

    string ans;
    for (int i = 0; i < n1; i++)
        ans.append("1+");
    for (int i = 0; i < n2; i++)
        ans.append("2+");
    for (int i = 0; i < n3; i++)
        ans.append("3+");
    for (int i = 0; i < ans.length() - 1; i++)
    {
        cout << ans[i];
    }
    cout << "\n";

    return 0;
}