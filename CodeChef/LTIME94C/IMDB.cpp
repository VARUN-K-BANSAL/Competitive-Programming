#include<iostream>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin >> t;
    while(t--){
        ll n,x,result;
        cin >> n >> x;
        ll s[n],r[n];
        for(ll i=0; i<n; i++) cin >> s[i] >> r[i];
        result = r[0];
        for(ll i=1; i<n; i++){
            if((r[i] > r[i-1]) && s[i] <= x) result = r[i];
        }
        cout << result << endl;
    }
    
    return 0;
}