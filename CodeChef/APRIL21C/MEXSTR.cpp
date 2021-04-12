#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s1, string s2)
{
    ll j = 0;
    for (ll i = 0; i < s2.size(); i++)
    {
        if (s1[j] == s2[i])         // checking if all the elements of s1 matches with any sequencial elements in s2
            j++;
        if (j == s1.size())         // terminate if j = length of s1 that is checked for the whole string
            return 0;               // it will return 0 when s1 is the subsequence of s2
    }
    return 1;
}

string solve(string str)
{
    queue <string> q;               // initalising a queue of strings
    q.push("1");                    // pushing initial value as 1 because 0 is already checked in main
    while (1)
    {
        string s1 = q.front();      // s1 = first string in q (q.front())
        q.pop();                    // removing the first string that is stored in s1
        if (check(s1, str))         // if s1 is not a subsequence of str check will return 1
            return s1;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);       // used for fast I/O
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int flag = 0;
        for (ll i = 0; i < str.size(); i++)
        {
            if (str[i] == '0')      // checking if all the elements of the string are 1
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "0\n";
        else
            cout << solve(str) << endl;
    }
    return 0;
}