#include <stdio.h>
int main(void)
{
	int B,H,result;
	printf("Enter Your Base : ");
	scanf("%d",&B);
	printf("Enter Your Height : ");
	scanf("%d",&H);
	result = 0.5*B*H;
	printf("Your Triangle Area is : %d",result);
	return 0;
}