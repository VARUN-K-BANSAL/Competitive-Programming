/*this code is being written by varun bansal
  linkedin profile -- https://www.linkedin.com/in/varun-bansal-819aab200/
*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    int d,c,a[3],b[3],suma=0,sumb=0;
	    scanf("%d %d",&d,&c);
	    for(int j=0; j<3; j++){
	        scanf("%d",&a[j]);
	        suma += a[j];
	    }
	    for(int j=0; j<3; j++){
	        scanf("%d",&b[j]);
	        sumb += b[j];
	    }
	    int del,cou;
	    if(suma >= 150 && sumb >= 150){
	        del = suma + sumb + 2*d;
	        cou = suma + sumb + c;
	        if(del > cou) printf("YES\n");
	        else printf("NO\n");
	    }
	    else if(suma >= 150 || sumb >= 150){
	        del = suma + sumb + 2*d;
	        cou = suma + sumb + d + c;
	        if(del > cou) printf("YES\n");
	        else printf("NO\n");
	    }
	    else if(suma < 150 && sumb < 150)   printf("NO\n");
	}
	return 0;
}

