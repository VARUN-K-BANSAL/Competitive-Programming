#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,sum;
	    cin >> n;
	    sum = n % 10;
	    while(n > 10){
	        n = n/10;
	    }
	    if(n == 10) sum++;
	    else sum += n%10;
	    cout << sum << endl;
	}
	return 0;
}
