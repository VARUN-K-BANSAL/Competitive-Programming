#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		ll m,n;
		cin >> m >> n;
		for(ll i=m; i<=n; i++){
			int flag = 0;
			for(ll j=2; j<=sqrt(i); j++){
				if(i%j == 0){
					flag = 1;
					break;
				}
			}
			if(!flag && (i != 1)) cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}