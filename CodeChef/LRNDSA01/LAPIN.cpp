#include <iostream>
#include <cstring>
using namespace std;

#define MAX_CHAR 501

bool checkCorrectOrNot(string s)
{
    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};

    int n = s.length();
    if (n == 1)
        return true;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        count1[s[i] - 'a']++;
        count2[s[j] - 'a']++;
    }

    for (int i = 0; i < MAX_CHAR; i++)
        if (count1[i] != count2[i])
            return false;

    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (checkCorrectOrNot(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}