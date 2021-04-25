#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int a[n];
        char temp;
        for (int i = 0; i < n; i++)
        {
            int fsum = 0, psum = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> temp;
                if (temp == 'F')
                {
                    fsum++;
                }
                else if (temp == 'P')
                {
                    psum++;
                }
            }
            if (fsum >= x)
            {
                a[i] = 1;
            }
            else if (fsum >= x - 1 && psum >= y)
            {
                a[i] = 1;
            }
            else
            {
                a[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << "\n";
    }

    return 0;
}