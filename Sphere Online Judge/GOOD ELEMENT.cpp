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
using vpll = vector<pair<ll , ll>>;
using vch = vector<char>;
using usi = unordered_set<int>;
using usl = unordered_set<ll>;

int pos[3000005] = {0};
int neg[3000005] = {0};

void debug_code(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n, goodElement = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        int flag = 0;
        for(int j=0; j<i; j++)
        {
            if(a[i] < a[j])
            {
                if(neg[-1*(a[i]-a[j])])
                {
                    flag = 1;
                }
            }
            else if(a[i] > a[j])
            {
                if(pos[a[i] - a[j]])
                {
                    flag = 1;
                }
            }
        }
        for(int j=0; j<i+1; j++)
        {
            if(a[i]+a[j] < 0)
            {
                neg[-1*(a[i] + a[j])] = 1;
            }
            else if(a[i]+a[j] > 0)
            {
                pos[(a[i] + a[j])] = 1;
            }
        }
        if(flag)
        {
            goodElement++;
        }
    }
    cout << goodElement << endl;
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