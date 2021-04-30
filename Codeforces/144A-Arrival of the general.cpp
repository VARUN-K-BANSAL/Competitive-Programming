#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int MaxValue = 0 , MinValue = 1000;
    int MaxIndex = 0 , MinIndex = 0;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(num > MaxValue){
            MaxIndex = i;
            MaxValue = num;
        }
        if(num <= MinValue){
            MinValue = num;
            MinIndex = i;
        }
    }
    if(MaxIndex > MinIndex)
        cout << MaxIndex - 1 + n - MinIndex -1 << "\n";
    else
        cout << MaxIndex - 1 + n - MinIndex << "\n";

    return 0;
}