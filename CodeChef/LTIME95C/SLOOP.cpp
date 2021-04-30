#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int m,s;
        cin >> m >> s;
        cout << m/s << "\n";
    }

    return 0;
}