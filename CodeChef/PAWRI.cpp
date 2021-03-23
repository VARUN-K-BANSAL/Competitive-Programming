#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;

int main() {
	
	ll t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    string check = "party";
	    for(ll i=0; i<s.length()-4; i++){
	        if(s.substr(i,5) == "party"){
	            s[i+2] = 'w';
	            s[i+3] = 'r';
	            s[i+4] = 'i';
	        }
	    }
	    cout << s << endl;
	}
	
	
	return 0;
}
