#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define bg begin
#define clr(x) memset(x, 0, sizeof(x))
#define endl "\n"

ll MOD = 1e9 + 7;
using mll = map<ll, ll>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vll = vector<ll>;
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
    ll n;
    cin >> n;
    int flag = 0 , invalid = 0;
    while(n--){
        ll counta = 0 , countb = 0;
        string s;
        cin >> s;

        int a = 0 , b = 0;
        if(s[0] >= 'a' && s[0] <= 'm'){
            a = 1;
        }
        else if(s[0] >= 'N' && s[0] <= 'Z'){
            b = 1;
        }
        else{
            invalid++;
        }
        for(ll i=0; i<s.length(); i++){
            if(a == 1 && s[i] >= 'N' && s[i] <= 'Z'){
                flag = 1;
                break;
            }
            else if(b == 1 && s[i] >= 'a' && s[i] <= 'm'){
                flag = 1;
                break;
            }
            else if((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'n' && s[i] <= 'z')){
                invalid = 1;
            }
        }
    }
    if(flag || invalid){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
}

int main()
{
    debug_code();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}