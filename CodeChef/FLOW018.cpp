#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0) return 1;
    return n*fact(n-1);
}

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	while(t--){
	    int result = 0;
	    cin >> n;
	    result = fact(n);
	    cout << result << endl;
	}
	return 0;
}
