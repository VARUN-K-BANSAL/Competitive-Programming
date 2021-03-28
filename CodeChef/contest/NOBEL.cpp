#include<iostream>
using namespace std;
typedef long long ll;

void heapify(ll *arr, ll n, ll i)
{
    ll largest = i; 
    ll l = 2 * i + 1; 
    ll r = 2 * i + 2; 
 
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
 
void sort(ll *arr, ll n)
{
    for (ll i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (ll i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m,count=0;
        cin >> n >> m;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a,n);
        for(ll i=0; i<n; i++){
            if(a[i] != a[i+1]) count++;
        }
        if(count < m) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}