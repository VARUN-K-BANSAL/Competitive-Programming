#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int p , v , t , ans = 0;
    while(n--){
        cin >> p >> v >> t;
        if(p&&v || p&&t || v&&t){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}