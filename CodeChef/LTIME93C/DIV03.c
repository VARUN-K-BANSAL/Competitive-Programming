/*  this code is being written by varun bansal
    linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	long long int a[10],n;
	for(int i=0; i<t; i++){
	    for(int j=0; j<10; j++)     scanf("%lld",&a[j]);
	    
	    scanf("%lld",&n);
	    
	    if(n >= a[9]){
	        n -= a[9];
	        if(n >= a[8]){
	            n -= a[8];
	            if(n >= a[7]){
	                n -= a[7];
	                if(n >= a[6]){
	                    n -= a[6];
	                    if(n >= a[5]){
	                        n -= a[5];
	                        if(n >= a[4]){
	                            n -= a[4];
	                            if(n >= a[3]){
	                                n -= a[3];
	                                if(n >= a[2]){
	                                    n -= a[2];
	                                    if(n >= a[1]){
	                                        printf("1\n");
	                                    }else{
	                                        printf("2\n");
	                                    }
	                                }else{
	                                    printf("3\n");
	                                }
	                            }else{
	                                printf("4\n");
	                            }
	                        }else{
	                           printf("5\n");
	                        }
	                    }else{
	                        printf("6\n");
	                    }
	                }else{
	                    printf("7\n");
	                }
	            }else{
	                 printf("8\n");
	            }
	        }else{
	            printf("9\n");
	        }
	    }else{
	        printf("10\n");
	    }
	}
	return 0;
}

