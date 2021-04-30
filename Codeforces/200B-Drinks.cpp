#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n , total = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        total += temp;
    }

    double ans = (double) total / (double) n;
    cout << ans << "\n";
    
    return 0;
}