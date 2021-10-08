#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define clr(x) memset(x, 0, sizeof(x))
#define endl "\n"

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pair<ll, ll>>;
using vch = vector<char>;
using usi = unordered_set<int>;
using usl = unordered_set<ll>;
using si = set<int>;
using sc = set<char>;

void debug_code()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve(int caseNo)
{
    ll n;
    ll count = 0;
    bool leftHand = false;
    bool rightHand = false;
    string temp;
    cin >> n >> temp;

    string s = "";
    s.pb(temp[0]);
    for (int i = 1; i < temp.length(); i++)
    {
        if (temp[i] != temp[i - 1])
        {
            s.pb(temp[i]);
        }
    }

    if ((s[1] == 'X' && s[0] == 'F') || (s[0] == 'X' && s[1] == 'F'))
    {
        leftHand = true;
    }
    else if ((s[1] == 'O' && s[0] == 'F') || (s[0] == 'O' && s[1] == 'F'))
    {
        rightHand = true;
    }
    else if (s[1] == 'X' && s[0] == 'O')
    {
        count++;
        leftHand = true;
    }
    else if (s[1] == 'O' && s[0] == 'X')
    {
        count++;
        rightHand = true;
    }

    for (int i = 2; i < s.length(); i++)
    {
        if (s[i] == 'X' && leftHand)
            continue;
        if (s[i] == 'F')
            continue;
        if (s[i] == 'O' && rightHand)
            continue;
        if (s[i] == 'X' && rightHand)
        {
            rightHand = false;
            leftHand = true;
            count++;
            continue;
        }
        if (s[i] == 'O' && leftHand)
        {
            leftHand = false;
            rightHand = true;
            count++;
            continue;
        }
    }

    cout << "Case #" << caseNo << ": " << count << endl;
}

int main()
{
    debug_code();

    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}