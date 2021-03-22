/*this code is being written by varun bansal
  linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>

int main(void) {
    float bal;
    int with;
    scanf("%d %f",&with,&bal);
    if( bal < (with+0.5) ) printf("%0.2f\n",bal);
    else if( with % 5  != 0 ) printf("%0.2f\n",bal);
    else{
        bal = bal-with-0.5;
        printf("%0.2f\n",bal);
    }
	return 0;
}

