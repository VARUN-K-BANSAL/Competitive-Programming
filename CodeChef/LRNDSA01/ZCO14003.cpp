#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t;
    cin >> t;
    ll budget[t],ans=0;
    for(ll i=0; i<t; i++) cin >> budget[i];
    sort(budget , budget + t);
    for(ll i=0; i<t; i++){
        ans = ((budget[i]*(t-i)) > ans) ? (budget[i]*(t-i)) : ans;
    }
    cout << ans << endl;

    return 0;
}