#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k,count=0;
        cin >> n >> k;
        char *a;
        a = (char*)malloc(n*sizeof(char));
        for (long int i = 0; i < n; i++)
        {
            cin >> *(a+i);
            if ((a[i] == '*' && a[i-1] == '*') || (a[i] == '*' && count == 0))
                count++;
            else
                count = 0;

            if (count == k)
            {
                cout << "YES\n";
                goto final;
            }
        }
        cout << "NO\n";
    final:
        free(a);
        continue;
    }
    return 0;
}