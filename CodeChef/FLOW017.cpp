#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long int a,b,c,max = 0;
	    cin >> a >> b >> c;
	    max = (a > b) ? (a < c) ? a : (b > c) ? b : c : (b < c) ? b : (a > c) ? a : c;
	    cout << max << endl;
	}
	return 0;
}
