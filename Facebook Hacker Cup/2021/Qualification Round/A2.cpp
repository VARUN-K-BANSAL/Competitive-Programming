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

int isVowel(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

void test(int check[], int adj[][27])
{
    
}

int solve()
{
    int k, vowels = 0, consonants = 0, check[30];
    int adjMatrix[27][27];
    clr(check);
    clr(adjMatrix);
    string s;

    cin >> s >> k;

    for(int i=1; i<=k; i++)
    {
        char ch1, ch2;
        cin >> ch1 >> ch2;
        adjMatrix[ch1-64][ch2-64] = 1;
    }

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        check[s[i] - 64]++;
        if(isVowel(s[i])) vowels++;
        else consonants++;
    }

    int vowelsToConsonants = 0;
    int consonantsToVowels = 0;

    test(check, adjMatrix);



    // for(int i=1; i<27; i++)
    // {
    //     for(int j=1; j<27; j++)
    //     {
    //         cout << adjMatrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
}

int main()
{
    debug_code();

    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ":\n" << solve() << endl;
    }

    return 0;
}