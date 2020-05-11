/*Armstrong Number - An Armstrong Number is a Number which is equal to it’s sum of digit’s cube. 
For example - 153 is an Armstrong number: here 153 = (1*1*1) + (5*5*5) + (3*3*3).*/

#include <stdio.h>
 
int main()
{
    int number, sum=0, rem=0,tempNumber;
 
    printf("Enter an integer number: ");
    scanf("%d", &number);
 
    tempNumber=number;
 
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }  
 
/* checking number is armstrong or not */ 
    if(sum==number)  
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
 
    return 0;
}