#include<iostream>
#include<numeric>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin >> t;
    while(t--){
        ll n,count = 0;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        if(!(accumulate(a,a+n,0) & 1)) cout << "0\n";
        else{
            
        }
    }
    
    return 0;
}