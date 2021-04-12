#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n, k,count = 0;
        cin >> n >> m >> k;
        double a[n+1][m+1];
        for(ll i=0; i<=n; i++){
            for(ll j=0; j<=m; j++){
                if(i==0 || j==0) a[i][j] = 0;
                else cin >> a[i][j];
            }
        }
        /*Adding along Rows */
        for(ll i=0; i<=n; i++){
            double temp = 0;
            for(ll j=0; j<=m; j++){
                a[i][j] += temp;
                temp = a[i][j];
            }
        }
        /*Adding along Columns */
        for(ll j=0; j<=m; j++){
            double temp = 0;
            for(ll i=0; i<=n; i++){
                a[i][j] += temp;
                temp = a[i][j];
            }
        }
        /*Checking for average*/
        ll min = (n < m) ? n : m;
        for(ll len=1; len<=min; len++){
            for(ll i=len; i<=n; i++){
                for(ll j=len; j<=m; j++){
                    if((a[i][j] + a[i-len][j-len] - a[i][j-len] - a[i-len][j])/(len*len) >= k)
                        count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}