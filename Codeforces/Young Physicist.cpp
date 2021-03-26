#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int x[n],y[n],z[n],temp=n,sumx=0,sumy=0,sumz=0;
    while(n--){
        cin >> x[n] >> y[n] >> z[n];
        sumx += x[n];
        sumy += y[n];
        sumz += z[n];
    }
    if(!sumx && !sumy && !sumz) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}