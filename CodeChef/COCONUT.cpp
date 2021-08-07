#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,A,B;
	    cin >> a >> b >> A >> B;
	    cout << ceil(A/a) + ceil(B/b) << endl;
	}
	return 0;
}