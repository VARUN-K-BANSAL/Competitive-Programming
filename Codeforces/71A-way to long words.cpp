/*
 Link -->   https://codeforces.com/problemset/problem/71/A
*/

#include <iostream>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char first = s[0] , last;
        int count = 0;
        for(int i=0; s[i]!='\0'; i++){
            count++;
            last = s[i];
        }
        if(count > 10){
            cout << first << count-2 << last << "\n";
        }
        else{
            cout << s << "\n";
        }
    }

    return 0;
}