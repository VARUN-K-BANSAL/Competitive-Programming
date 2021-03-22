#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t,a[10000],sq[10000];
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d",&a[i]);
	    sq[i] = sqrt(a[i]);
	}
	for(int i=0; i<t; i++){
	    printf("%d\n",sq[i]);
	}
	
	return 0;
}