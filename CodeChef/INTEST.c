// Note that this problem is for testing fast input-output.
#include <stdio.h> 

int main() {
	// Read the input n, k
	long int n, k;
	scanf("%ld %ld", &n, &k);

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (long int i = 0; i < n; i++) {
		long int t;
		scanf("%ld", &t);
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	printf("%d\n", ans);
	
	return 0;
}

