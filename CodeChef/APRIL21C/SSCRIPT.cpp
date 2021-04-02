#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        char *a;
        a = (char*)malloc(n*sizeof(char));
        for (long int i = 0; i < n; i++)
            cin >> *(a+i);

        for (long int i = 0; i < n; i++)
        {
            long int count = 0;
            if (a[i] == '*')
            {
                for (long int j = i; j < i + k; j++)
                {
                    if (a[j] == '*')
                        count++;
                }
            }
            if (count == k)
            {
                cout << "YES\n";
                goto final;
            }
        }
        cout << "NO\n";
    final:
        continue;
        free(a);
    }
    return 0;
}