/*this code is being written by varun bansal
  Linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>
#include <math.h>

int main() {
    long int t;
    scanf("%ld",&t);
    for(int i=0; i<t; i++){
        long long int c,d,n;
        scanf("%ld",&c);
        d = floor(log(c)/log(2));
        n = pow(2,d)-1;
        printf("%lld\n",n*(n^c));
    }
	return 0;
}