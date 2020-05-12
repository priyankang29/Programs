#include <stdio.h>

//function to check whether all bits are 
//UNSET/LOW or not?
int isAllBitsUnset(unsigned int num)
{
    int loop, cnt=0;
    
    for(loop=7; loop>=0; loop--)
    {
        //check, if there is any SET/HIGH bit
        if( num & (1<<loop))
        {
            cnt =1;
            break;
        }
    }
    if(cnt==0)
        return 1; //true
    else
        return 0; //false
}