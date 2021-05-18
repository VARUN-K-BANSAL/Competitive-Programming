#include <iostream>
using namespace std;
typedef long long ll;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main(){
    fast;

    ll t;
    cin >> t;
    while(t--){
        ll n , x , k;
        cin >> n >> x >> k;
        if(x % k == 0 || (n + 1 - x) % k == 0){
            cout << "YES\n";
            continue;
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}