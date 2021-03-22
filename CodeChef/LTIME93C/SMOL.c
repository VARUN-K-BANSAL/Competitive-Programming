/*this code is being written by varun bansal
  linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t = 0;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    long long int a,b;
	    scanf("%lld %lld",&a,&b);
	    if(b == 0) printf("%lld\n",a);
	    else {
	        long long int c = a%b;
	        printf("%lld\n",c);
	    }
	}
	return 0;
}

