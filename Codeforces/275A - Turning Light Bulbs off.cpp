#include <iostream>
using namespace std;

void printvals(int r[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << r[i][j];
        }
        cout << endl;
    }
}

int main()
{

    int a[3][3], r[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                switch (i)
                {
                case 0:
                    switch (j)
                    {
                    case 0:
                        r[i][j] = !r[i][j];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i + 1][j] = !r[i + 1][j];
                        break;

                    case 1:
                        r[i][j] = !r[i][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i + 1][j] = !r[i + 1][j];
                        break;

                    case 2:
                        r[i][j] = !r[i][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i + 1][j] = !r[i + 1][j];
                        break;
                    }
                    break;

                case 1:
                    switch (j)
                    {
                    case 0:
                        r[i][j] = !r[i][j];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i + 1][j] = !r[i + 1][j];
                        r[i - 1][j] = !r[i - 1][j];
                        break;

                    case 1:
                        r[i][j] = !r[i][j];
                        r[i - 1][j] = !r[i - 1][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i + 1][j] = !r[i + 1][j];
                        break;

                    case 2:
                        r[i][j] = !r[i][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i + 1][j] = !r[i + 1][j];
                        r[i - 1][j] = !r[i - 1][j];
                        break;
                    }
                    break;

                case 2:
                    switch (j)
                    {
                    case 0:
                        r[i][j] = !r[i][j];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i - 1][j] = !r[i - 1][j];
                        break;

                    case 1:
                        r[i][j] = !r[i][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i][j + 1] = !r[i][j + 1];
                        r[i - 1][j] = !r[i - 1][j];
                        break;

                    case 2:
                        r[i][j] = !r[i][j];
                        r[i][j - 1] = !r[i][j - 1];
                        r[i - 1][j] = !r[i - 1][j];
                        break;
                    }
                    break;
                }
            }
        }
    }
    printvals(r);
    return 0;
}