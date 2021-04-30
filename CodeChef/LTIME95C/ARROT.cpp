#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll div = 1000000007;
    ll n , sum=0;
    cin >> n;

    // finding sum of the array
    while(n--){
        ll temp;
        cin >> temp;
        sum = (sum+temp+div)%div;
    }

    // solving queries
    ll q;
    cin >> q;
    while(q--){
        sum = (2*sum)%div;          // after every rotation sum is constant so we can directly add it
        cout << sum << "\n";
    }

    return 0;
}