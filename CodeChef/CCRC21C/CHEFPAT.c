#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	int a[100000],a1[100000];
	for(int i=0; i<t; i++){
	    int n;
	    scanf("%d",&n);
	    for(int j=0; j<n; j++) scanf("%d",&a[j]);
	    int count = 0;
	    for(int j=1000; j>0; j--){
	        for(int m=0; m<n; m++){
	            if(j == a[m]){
	              a1[m] = 1 + count;
	              count++;
	            }
	        }
	    }
	    for(int j=0; j<n; j++){
	        printf("%d ",a1[j]);
	    }
	    printf("\n");
	}
	return 0;
}

