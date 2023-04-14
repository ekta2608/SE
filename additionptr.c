#include<stdio.h>
int main(){
	int a,b,c,*p,*q;
	p= &a;
	q= &b;	
	printf("enter the value of a and b: \n");
	scanf("%d%d",&a,&b);
	//p= &a;
//	q= &b;

	c=*p + *q;
	
	printf("sum of two values is : %d ",c);
	
	
}
