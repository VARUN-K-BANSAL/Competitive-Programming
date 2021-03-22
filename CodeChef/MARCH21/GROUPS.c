/*this code is being written by varun bansal
  linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    long int n = 0 , count=0;
	    char *c;
	    c = (char*)malloc(sizeof(char)*100000);
	    scanf("%s",c);
	    n = strlen(c);
	    if(*(c) == '1') count++;
	    long int i;
	    for(i=1; i<n; i++){
	        if(*(c+i) == '1' && *(c+i-1) != '1') count++;
	    }
	    printf("%ld\n",count);
	    free(c);
	}
	return 0;
}

