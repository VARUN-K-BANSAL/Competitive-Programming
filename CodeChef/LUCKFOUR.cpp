#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int temp = 0;
	    while(n!=0){
	        if(n%10 == 4){
	            temp++;
	            n /= 10;
	        }
	        else n /= 10;
	    }
	    cout << temp << endl;
	}
	return 0;
}
