#include<stdio.h>

main(){
	
	int a;
	int *b;
	
	printf("Enter Value : ");
	scanf("%d",&a);
	
	b = &a;
	
	*b = a*a;
	
	printf("%u -> %d",b,*b);
}
