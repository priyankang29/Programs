#include <stdio.h>

int main()
{
	unsigned int n;
	printf("enter the integer\n");
	scanf("%d",&n);

	while(n>0){
		int temp=n&1;
		if(temp == 0){ //if any bit not set
			printf("all bits are not set\n");
			return 0;
		}
		n=n>>1; //right shift operator
	}

	printf("all bits are set ");
	printf("in its binary representation\n");

	return 0;
}