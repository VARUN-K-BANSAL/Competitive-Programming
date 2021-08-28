/*
Link -- https://codeforces.com/contest/1560/problem/A
*/

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

void debug_code()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int withoutThree[2000], withoutMultipleOfThree[2000];
int finalArray[1000];

void doIntersection()
{
    int i=0, j=0, k=0;
    while(i < 2000 && j < 2000 && k < 1000)
    {
        if(withoutThree[i] < withoutMultipleOfThree[j])
        {
            i++;
        }
        else if(withoutMultipleOfThree[j] < withoutThree[i])
        {
            j++;
        }
        else if(withoutThree[i] == withoutMultipleOfThree[j])
        {
            finalArray[k] = withoutThree[i];
            i++;
            j++;
            k++;
        }
    }
}

void precode()
{
    int j=1;
    for(int i=0; i<2000; i++)
    {
        if(j%10 != 3)
        {
            withoutThree[i] = j;
        }
        else
        {
            i--;
        }
        j++;
    }

    j = 1;
    for (int i = 0; i < 2000; i+=2)
    {
        withoutMultipleOfThree[i] = j;
        withoutMultipleOfThree[i+1] = j+1;
        j += 3;
    }
    doIntersection();
}

void solve()
{
    int m;
    cin >> m;
    cout << finalArray[m-1] << endl;
}

int main()
{
    debug_code();
    precode();

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    // solve();

    return 0;
}