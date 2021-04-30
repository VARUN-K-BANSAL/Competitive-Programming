#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if(n%2 == 1) cout << "-1\n";
    else{
        for(int i=0; i<n; i++){
            if(i%2 == 0) cout << i+2;
            else cout << i;
            cout << " ";
        }
    }

    return 0;
}