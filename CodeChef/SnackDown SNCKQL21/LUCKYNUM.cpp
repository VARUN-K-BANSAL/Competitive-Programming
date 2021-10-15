#include <iostream>
using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if(a == 7 || b == 7 || c == 7) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
	// your code goes here
    ll t;
    cin >> t;
    while(t--) solve();
	return 0;
}
