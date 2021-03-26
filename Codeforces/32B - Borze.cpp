#include <iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int a[100], j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
        {
            a[j] = 0;
            j++;
        }
        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                a[j] = 1;
                j++;
            }
            else if (s[i + 1] == '-')
            {
                a[j] = 2;
                j++;
            }
            i++;
        }
    }
    for (int i = 0; i < j; i++)
        cout << a[i];
    cout << endl;

    return 0;
}