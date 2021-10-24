#include <iostream>
using namespace std;

typedef unsigned long long ll;

void solve()
{
    ll x, k;
    cin >> x >> k;
    ll minLCM = x+x;
    ll maxLCM = (x*k)*(x*k-1);
    cout << minLCM << " " << maxLCM << "\n";
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
