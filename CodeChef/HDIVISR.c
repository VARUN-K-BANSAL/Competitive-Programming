#include <stdio.h>

int main(void) {
	// your code goes here
	int n,temp=0;
	scanf("%d",&n);
	for(int i=1; i<=10; i++){
	    if(n%i == 0){
	        temp = (temp > i) ? temp : i;
	    }
	}
	printf("%d\n",temp);
	return 0;
}