// Link -- https://www.codechef.com/AUG21B/problems/OLYRANK

#include <iostream>
using namespace std;

void solve()
{
    int g1,s1,b1,g2,s2,b2;
    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
    if(g1+s1+b1 > g2+s2+b2)
    {
        cout << "1\n";
    }
    else
    {
        cout << "2\n";
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
