#include <stdio.h>
#include <stdlib.h>
void swap(char *x,char *y)
{

    char t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nAfter swap : %s\t%s",x,y);
}
void compute(char *a,int l,int r)
{
    int i;
    if(l==r)
    {
        printf("\nPermutation is %s\n",a);

    }
    else
    {
        for(i=l;i<=r;i++)
        {
            printf("%s\t%s\n",(a+l),(a+i));
            swap((a+l),(a+i));
            compute(a,l+1,r);
            swap((a+l),(a+i));
        }
    }

}
int main()
{

    char str[]="abc";
    int n=strlen(str);
    compute(str,0,n-1);
    return 0;
}
