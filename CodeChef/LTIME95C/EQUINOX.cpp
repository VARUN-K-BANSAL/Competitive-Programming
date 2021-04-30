#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--){
        int n , a, b , scorea = 0 , scoreb = 0;
        cin >> n >> a >> b;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
                scorea += a;
            else
                scoreb += b;
        }
        if(scorea == scoreb) cout << "DRAW\n";
        else if(scorea > scoreb) cout << "SARTHAK\n";
        else cout << "ANURADHA\n";
    }

    return 0;
}