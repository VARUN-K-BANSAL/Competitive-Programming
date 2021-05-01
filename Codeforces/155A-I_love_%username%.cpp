/*
* link = https://codeforces.com/problemset/problem/155/A
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, temp = 0 , ans = 0;
    cin >> n >> temp;
    int min = temp , max = temp;
    for (int i = 1; i < n; i++)
    {
        int input;
        cin >> input;
        if (input < min){
            ans++;
            min = input;
        }
        if(input > max){
            ans++;
            max = input;
        }
    }
    cout << ans << "\n";

    return 0;
}