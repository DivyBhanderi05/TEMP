#include<stdio.h>

main(){
	
	int i = 1,n,c = 0;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(n!=0){
		n=n/10;
		c++;
	}
	printf("%d",c);
}
