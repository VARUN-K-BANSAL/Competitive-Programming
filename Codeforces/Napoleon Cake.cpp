#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define vll vector<ll>
 
void solve(){
    	ll n;
    	cin>>n;
    	vll a(n);
    	for(ll i=0; i<n; i++) cin>>a[i];
 
    	vll ans(n);
    	ll next=0;      //next is the number of next layers that will get creamed.
 
    	for(ll i=n-1; i>=0; i--){
        	if(a[i] > 0 || next>0){
            	ans[i] = 1;
            	if(a[i]>next) next = a[i];
            	next--;
        	}
        	else next = a[i] - 1;
    	}
    	for(ll i=0; i<n; i++) cout<<ans[i]<<" ";
    	cout<<"\n";
}
int main()
{
    	cin.tie(NULL);
    	int t;
    	cin>>t;
    	while(t--) solve();
    	return 0;
}