#include <iostream>
using namespace std;

void solve()
{
    int india = 0, eng = 0;
    for(int i=0; i<5; i++) {
        int a;
        cin >> a;
        if(a == 1) india++;
        if(a == 2) eng++;
    }
    if(india > eng) cout << "INDIA\n";
    else if(eng > india) cout << "ENGLAND\n";
    else cout << "DRAW\n";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) solve();
	
	return 0;
}
