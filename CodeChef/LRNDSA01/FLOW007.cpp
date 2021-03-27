#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long int n,rev=0;
	    cin >> n;
	    while(n){
	        rev = rev*10 + n%10;
	        n /= 10;
	    }
	    cout << rev << endl;
	}
	return 0;
}
