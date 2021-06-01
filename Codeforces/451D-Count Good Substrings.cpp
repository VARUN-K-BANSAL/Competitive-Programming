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
using pll = pair<ll , ll>;
using mll = map<ll, ll>;
using mi = map<int, int>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pll>;
using vch = vector<char>;

void debug_code(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    string s;
    cin >> s;
    ll ansEven = 0 , ansOdd = 0;
    ll cntEven[2] , cntOdd[2];
    cntOdd[0] = cntOdd[1] = cntEven[0] = cntEven[1] = 0;
    for (int i = 0; i < s.size(); ++i){
        ansOdd++;
        int temp = s[i] - 'a';
        if(i % 2 == 0){
            ansOdd += cntEven[temp];
            ansEven += cntOdd[temp];
            cntEven[temp]++;
        }
        else{
            ansOdd += cntOdd[temp];
            ansEven += cntEven[temp];
            cntOdd[temp]++;
        }
    }
    cout << ansEven << " " << ansOdd << endl;
}

int main()
{
    debug_code();
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}