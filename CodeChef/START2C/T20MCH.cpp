#include<iostream>
using namespace std;

int main(){
    long int r,o,c;
    cin >> r >> o >> c;
    if(((20-o)*36) > (r-c)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}