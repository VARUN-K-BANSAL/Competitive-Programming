// Solution by Varun Bansal

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
#define clr(x) memset(x, -1, sizeof(x))
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

void debug_code()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve(int iter)
{
    int result = 0, n;
    cin >> n;
    char a[n][n];
    int rows[n], columns[n], minRow = INT_MAX, minCol = INT_MAX;
    clr(rows);
    clr(columns);

    for(int i=0; i<n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    for (int i = 0; i < n; i++)
    {
        int temp = 0, flag = 0;
        for(int j=0; j<n; j++)
        {
            if(a[i][j] == 'O')
            {
                flag = 1;
                break;
            }
            else if(a[i][j] == '.')
            {
                temp++;
            }
        }
        if(!flag)
        {
            rows[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp = 0, flag = 0;
        for(int j=0; j<n; j++)
        {
            if(a[j][i] == 'O')
            {
                flag = 1;
                break;
            }
            else if(a[j][i] == '.')
            {
                temp++;
            }
        }
        if(!flag)
        {
            columns[i] = temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(minRow > rows[i] && rows[i] != -1)
        {
            minRow = rows[i];
        }
        if(minCol > columns[i] && columns[i] != -1)
        {
            minCol = columns[i];
        }
    }
    int finalMin = (minCol > minRow) ? minRow : minCol;
    if(minRow == INT_MAX && minCol == INT_MAX)
    {
        cout << "Case #" << iter << ": Impossible\n";
        return;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(rows[i] == finalMin && columns[i] == finalMin)
            {
                int temp = 0;
                for(int k=0; k<n; k++)
                {
                    if(a[i][k] == '.' && a[k][i] == '.' && i == k)
                    {
                        temp++;
                    }
                }
                if(temp == finalMin)
                {
                    result--;
                }

                result += 2;
            }
            else if(rows[i] == finalMin || columns[i] == finalMin)
            {
                result++;
            }
        }
        cout << "Case #" << iter << ": " << finalMin << " " << result << endl;
    }
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