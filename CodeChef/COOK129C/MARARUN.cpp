#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define bg begin
#define clr(x) memset(x, 0, sizeof(x))

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vll = vector<ll>;
using vch = vector<char>;

void solve()
{
    int D,d,A,B,C;
    ll result = 0;   
    cin >> D >> d >> A >> B >> C;
    if (d * D >= 10){
        result = A;
    }
    if(d * D >= 21){
        if(B > result){
            result = B;
        }
    }
    if(d * D >= 42){
        if(C > result){
            result = C;
        }
    }
    cout << result << endl;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}