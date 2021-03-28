#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, count = 0;
        cin >> n >> m;
        int flag = 0;
        ll f[n], c[m], lara=0,larb=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> f[i];
            lara = (f[i] > lara) ? f[i] : lara;
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> c[i];
            larb = (c[i] > larb) ? c[i] : larb;
        }
        vector<ll> vectf(f,f+n);
        vector<ll> vectc(c,c+m);
        ll largest = (lara > larb) ? lara : larb;
        for(ll i=1; i<=largest; i++){
            if((find(vectf.begin(),vectf.end(),i) != vectf.end()) && flag == 1){
                count++;
                flag = 0;
            }
            else if((find(vectc.begin(),vectc.end(),i) != vectc.end()) && flag == 0){
                count++;
                flag = 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}