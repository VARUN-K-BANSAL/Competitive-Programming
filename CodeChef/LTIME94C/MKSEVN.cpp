#include <iostream>
#include <numeric>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n,sum=0,temp=1;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            temp = (a[i] == 2) ? 2 : temp;
            sum += a[i];
        }
        if (sum % 2 == 0)
            cout << "0\n";
        else if(temp == 2)
            cout << "1\n";
        else cout << "-1\n";
    }

    return 0;
}