#include<stdio.h>

main(){
	
	int a;
	int b;
	
	printf("Enter First Value : ");
	scanf("%d",&a);
	
	printf("Enter Secound Value : ");
	scanf("%d",&b);
	
	int *y,*z;
	
	a=a+b;
    b=a-b;
    a=a-b;
    
    y = &a;
    z = &b;
    
    printf("\n%u -> %d",y,*y);
    printf("\n%u -> %d",z,*z);
    
	

}
