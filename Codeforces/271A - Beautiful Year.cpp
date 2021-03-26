#include <iostream>
using namespace std;

int main()
{
    int y, a1, a2, a3, a4;
    cin >> y;
    for (int i = y + 1;; i++)
    {
        a1 = i % 10;
        a2 = (i % 100 - a1) / 10;
        a3 = (i % 1000 - a2 * 10 - a1) / 100;
        a4 = (i % 10000 - a3 * 100 - a2 * 10 - a1) / 1000;
        if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
