#include <iostream>
using namespace std;
typedef long long ll;
#define endl "\n"

int main() {
	int t;
	cin >> t;
	while(t--){
	    ll x,n,count = 0 , temp = 0;
	    cin >> n >> x;
	    ll a[n];
	    for(ll i=0; i<n; i++) cin >> a[i];
	    for(ll i=1; i<n; i++){
	        if(a[i] != a[i-1]) count++;
	        else temp++;
	    }
	    if(temp >= x) cout << count << endl;
	    else cout << count - temp << endl;
	}
	return 0;
}