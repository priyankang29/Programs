//C implementation to Check if nth Bit in a 32-bit Integer is set or not
#include <stdio.h>

int main()
{   
    int n,k;
    printf("enter a 32 bit number\n");
    scanf("%d",&k);
    printf("enter the bit no to check...\n");
    printf("bit-no 0-indexed & 0 starts from LSB...\n");
    scanf("%d",&n);
	if(n>32){
		printf("enter between 0-31\n");
		return;
	}
    
    k=k>>n; //right shift the no to get nth bit at LSB
    if(k&1==1) //check whether nth bit set or not
    printf("%d th bit is set\n",n);
    else
    printf("%d th bit not set\n",n);
    
    return 0;
    
}
