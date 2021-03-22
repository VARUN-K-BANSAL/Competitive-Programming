/*this code is being written by varun bansal
  linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,h,x;
	scanf("%d %d %d",&n,&h,&x);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d",&a[i]);
	for(int i=0; i<n; i++){
	    if((a[i] + x) == h){
	        printf("YES\n");
	        goto end;
	    }
	}
	printf("NO\n");
end:
    return 0;
}

