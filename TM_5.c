#include<stdio.h>

main(){
	
	int i = 1,n,f = 1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(n>=i){
		f = f * n;
		n--;
	}
	printf("%d",f);
}
