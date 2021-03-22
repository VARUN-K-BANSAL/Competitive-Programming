#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int answer = a + b;
	    printf("%d\n",answer);
	    
	}

	return 0;
}