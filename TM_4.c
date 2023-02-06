#include<stdio.h>

main(){
	
	int  n,fd,ld;
	printf("Enter Value N : ");
	scanf("%d",&n);
	
	ld = n%10;
	while(n>=10){
		n=n/10;
	}
	fd = n;
	printf("ans : %d",fd+ld);
	
	
}
