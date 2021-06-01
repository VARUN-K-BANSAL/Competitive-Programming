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
using mi = map<int, int>;
using mcl = map<char, ll>;
using mcc = map<char, char>;
using vi = vector<int>;
using vll = vector<ll>;
using vpll = vector<pair<ll , ll>>;
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
    int n;
    cin >> n;
    int a[n] , b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];        // copy of a[n]
    }

    sort(b, b + n); // b-> 3 2 1 ==> b-> 1 2 3
    mi mp;
    for (int i = 0; i < n; ++i){
        mp[b[i]] = i;   // mp-> <1,0> <2,1> <3,2>
    }
    for (int i = 0; i < n; ++i){
        a[i] = mp[a[i]];    // a-> 2 1 0
    }

    int l = -1 , r = -1;
    for (int i = 0; i < n; ++i){
        if(a[i] != i){
            l = i;          // l = 0
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if (a[i] != i)
        {
            r = i;      // r = 2
            break;
        }
    }
    if(l == -1 || r == -1){
        cout << "yes\n";
        cout << 1 << " " << 1 << endl;
    }
    else{
        reverse(a + l , a + r + 1);
        bool check = true;
        for (int i = 0; i < n; ++i){
            if (a[i] != i){
                check = false;
            }
        }
        if(check){
            cout << "yes\n";
            cout << l+1 << " " << r+1 << endl;
        }
        else{
            cout << "no\n";
        }
    }
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