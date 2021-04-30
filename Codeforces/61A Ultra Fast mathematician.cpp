#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1, s2, s;
    cin >> s1 >> s2;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
            s.append("0");
        else
            s.append("1");
    }
    cout << s << "\n";
    return 0;
}