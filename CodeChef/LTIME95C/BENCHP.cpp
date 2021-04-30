#include <iostream>
using namespace std;

typedef long long ll;
 
void merge(ll *arr, ll l, ll m, ll r)
{
    ll n1 = m - l + 1;
    ll n2 = r - m;
 
    ll L[n1], R[n2];
 
    for (ll i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (ll j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    ll i = 0;
 
    ll j = 0;
 
    ll k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(ll *arr,ll l,ll r){
    if(l>=r){
        return;
    }
    ll m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, w, wr;
        cin >> n >> w >> wr;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (w <= wr)
            cout << "YES\n";
        else
        {
            mergeSort(a,0,n-1);
            for(int i=0; i<n; i+=2){
                if(a[i] == a[i+1]){
                    wr += 2*a[i];
                }
                else if(a[i] != a[i+1]) i -= 1;
            }
            if(wr >= w) cout << "YES\n";
            else cout << "NO\n";
        }
    }
   
    return 0;
}