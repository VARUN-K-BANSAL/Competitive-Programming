#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k,l,m,n;
    long int d;
    cin >> k >> l >> m >> n >> d;
    int a[d] , ans = 0;

    for(int i=1; i<=d; i++){
        if(!(i%k)) a[i-1] = 1;
        else if(!(i%l)) a[i-1] = 1;
        else if(!(i%m)) a[i-1] = 1;
        else if(!(i%n)) a[i-1] = 1;
        else a[i-1] = 0;
    }

    for(int i=0; i<d; i++)
        if(a[i]) ans++;
    
    cout << ans << "\n";

    return 0;
}