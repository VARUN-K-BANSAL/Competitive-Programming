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

int solve()
{
    int check[30], maxVal = 0, vowelMax = 0, result = 0, indexMax = 0;
    clr(check);
    int vowels = 0, consonants = 0;
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        check[s[i] - 65]++;
        if(isVowel(s[i])) vowels++;
        else consonants++;
    }

    int vowelsToConsonants = 0;
    int consonantsToVowels = 0;

    // vowels to consonants
    int n = 26;
    indexMax = 1;

    for(int i=1; i<n; i++)
    {
        if(!(i == 4 || i == 8 || i == 14 || i == 20))
        {
            indexMax = (check[indexMax] < check[i]) ? i : indexMax;
        }
    }

    vowelsToConsonants = vowels;
    for(int i=1; i<n; i++)
    {
        if(!(i == 4 || i == 8 || i == 14 || i == 20) && i != indexMax)
        {
            vowelsToConsonants += 2*check[i];
        }
    }

    // consonants to vowels
    indexMax = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
        {
            indexMax = (check[indexMax] < check[i]) ? i : indexMax;
        }
    }

    consonantsToVowels = consonants;
    for(int i=0; i<n; i++)
    {
        if((i == 0 || i == 4 || i == 8 || i == 14 || i == 20) && i != indexMax)
        {
            consonantsToVowels += 2*check[i];
        }
    }

    return (consonantsToVowels > vowelsToConsonants) ? vowelsToConsonants : consonantsToVowels;
}

int main()
{
    debug_code();

    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}