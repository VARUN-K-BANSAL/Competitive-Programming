#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int moves = 0;
    while(x != y)
    {
        if(x < y) x += 2;
        else if(x > y) x--;
        moves++;
    }
    cout << moves << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
