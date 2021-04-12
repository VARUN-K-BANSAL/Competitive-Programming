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
        long int n, k, count = 0 , i = 0;
        cin >> n >> k;
        char *a;
        a = (char *)malloc(n * sizeof(char));
        for (long int i = 0; i < n; i++)
        {
            cin >> *(a + i);
        }
        while(i < n){
            if ((a[i] == '*' && a[i - 1] == '*') || (a[i] == '*' && count == 0))
            {
                count++;
                if (count == k)
                {
                    cout << "YES\n";
                    goto final;
                }
            }
            else
                count = 0;
            i++;
        }
        cout << "NO\n";
    final:
        free(a);
        continue;
    }
    return 0;
}