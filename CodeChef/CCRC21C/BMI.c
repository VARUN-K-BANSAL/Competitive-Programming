#include <stdio.h>

int main(void) {
	// your code goes here
	int t = 0 , m[100000] , h[100000];
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d",&m[i]);
	    scanf("%d",&h[i]);
	}
	for(int i=0; i<t; i++){
	    int temp = (m[i]/(h[i]*h[i]));
	    if(temp <= 18) printf("1\n");
	    else if(temp >= 19 && temp <= 24) printf("2\n");
	    else if(temp >= 25 && temp <= 29) printf("3\n");
	    else printf("4\n");
	}
	return 0;
}

