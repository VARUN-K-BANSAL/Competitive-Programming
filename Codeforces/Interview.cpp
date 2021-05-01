/*
* link = https://codeforces.com/contest/631/problem/A
*/

#include <iostream>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n , sum = 0 , sum1 = 0 , a , b;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> a;
        sum = sum|a;
    }

    for(ll i=0; i<n; i++){
        cin >> b;
        sum1 = sum1|b;
    }
    cout << sum+sum1 << "\n";

    return 0;
}