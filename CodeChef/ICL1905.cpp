#include <iostream>
using namespace std;

void solve()
{
	int N,A;
	cin >> N >> A;
	int C[N+1], D[N+1], prefixSum[N+1];
	prefixSum[0] = 0;
	for(int i=1; i<=N; i++)
	{
		cin >> C[i] >> D[i];
		prefixSum[i] = prefixSum[i-1] + C[i];
	}
	int maxProfit = 0;
	for(int i=1; i<=N; i++)
	{
		int x = D[i];
		int y = x;
		for(int j=i; j<=N; j++)
		{
			x = (D[j] > x) ? D[j] : x;
			y = (D[j] < y) ? D[j] : y;
			int profit = (j-i+1)*A - (prefixSum[j] - prefixSum[i-1]) - ((x-y)*(x-y));
			maxProfit = (profit > maxProfit) ? profit : maxProfit;
		}
	}
	cout << maxProfit << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}