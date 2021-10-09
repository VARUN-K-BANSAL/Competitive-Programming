#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void debug_code()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    
    ll j = 0;
    vector<ll> front;
    vector<ll> back;

    for(int i=0; i<m; i++) {
        while(t[i] != s[j]) j++;
        front.push_back(j);
        j++;
    }

    j = n - 1;
    for(int i=m-1; i>=0; i--)  {
        while(t[i] != s[j]) j--;
        back.push_back(j);
        j--;
    }

    ll res = 0;
    for(int i=0; i<m-1; i++) {
        res = (back[m-i-2] - front[i] > res) ? back[m-i-2] - front[i] : res;
    }
    cout << res << endl;
}

int main()
{
    debug_code();
    solve();

    return 0;
}