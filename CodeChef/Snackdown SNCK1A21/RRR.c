#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = floor((2*n-k-1)/2);
    ans = 2*ans;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
