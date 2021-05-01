#include <iostream>
using namespace std;

int main()
{

    int scorew = 0, scoreb = 0;

    char a[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
            if (islower(a[i][j]))
            {
                if (a[i][j] == 'q')
                    scoreb += 9;
                else if (a[i][j] == 'r')
                    scoreb += 5;
                else if (a[i][j] == 'b' || a[i][j] == 'n')
                    scoreb += 3;
                else if (a[i][j] == 'p')
                    scoreb += 1;
            }
            else
            {
                if (a[i][j] == 'Q')
                    scorew += 9;
                else if (a[i][j] == 'R')
                    scorew += 5;
                else if (a[i][j] == 'B' || a[i][j] == 'N')
                    scorew += 3;
                else if (a[i][j] == 'P')
                    scorew += 1;
            }
        }
    }

    if (scorew > scoreb)
        cout << "WHITE\n";
    else if (scoreb > scorew)
        cout << "BLACK\n";
    else
        cout << "DRAW\n";

    return 0;
}