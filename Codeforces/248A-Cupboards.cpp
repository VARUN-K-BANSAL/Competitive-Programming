#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n , CountLeft = 0 , CountRight = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int l,r;
        cin >> l >> r;
        if(l) CountLeft++;
        if(r) CountRight++;
    }

    int temp = n - CountRight;
    int RightTime = (temp < CountRight) ? temp : CountRight;
    temp = n - CountLeft;
    int LeftTime = (temp < CountLeft) ? temp : CountLeft;

    cout << RightTime + LeftTime << "\n";
    return 0;
}