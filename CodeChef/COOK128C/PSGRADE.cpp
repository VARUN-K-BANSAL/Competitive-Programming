#include <iostream>
using namespace std;

int main() {
	int am,bm,cm,t,tm,a,b,c;
	cin >> t;
	while(t--){
	    cin >> am >> bm >> cm >> tm >> a >> b >> c;
	    if(a >= am && b >= bm && c >= cm && (a+b+c >= tm)) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
