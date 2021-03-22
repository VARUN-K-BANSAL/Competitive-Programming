#include <iostream>
#include <cmath>
using namespace std;
long long int n;
int main()
{
    int a, b, t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        cin >> n;
        a = 0;
        b = 0;
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (a == 0)
                {
                    a = i;
                    n /= i;
                }
                else
                {
                    b = i;
                    n /= i;
                    if (a < b && b < n)
                        flag = 1;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n"
                 << a << " " << b << " " << n << endl;
        else
            cout << "NO\n";
    }
    return 0;
}