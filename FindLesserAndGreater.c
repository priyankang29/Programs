/** C program to find and print nearest lesser element 
 * and nearest greater element in an array.
*/
/*

Enter the number of elements for the arrray : 3  
 
Enter the elements for array_1.. 
array_1[0] : 1   
array_1[1] : 2   
array_1[2] : 3   
 
Enter the number : 2 
 
Element lesser than 2 is : 1 
Element greater than 2 is : 3
*/

#include <stdio.h>

// function to find the nearest lesser and
// nearest greater element
void Find_Lesser_Greater_Element(int *array , int n , int index)
{
    int i=0;

    // this means that the index of that element is the
    // last one and there is no element beyond it.
    // thus we need to check this condition.
    // In this case we can only compare this number with its
    // previous successor.
    if( (index+1) == n)
    {
        if(array[index-1] < array[index])
        {
            printf("\nElement lesser than %d is : %d",array[index],array[index-1]);
            printf("\nThere is no greater Element");
        }
        if(array[index-1] > array[index])
        {
            printf("\nElement greater than %d is : %d",array[index],array[index-1]);
            printf("\nThere is no lesser Element");
        }
        return;
    }

    // this means that the index of that element is the
    // last one and there is no element beyond it.
    // thus we need to check this condition.
    // In this case we can only compare this number with its
    // previous successor.
    if( index == 0)
    {
        if(array[index+1] < array[index])
        {
           
            printf("\nElement lesser than %d is : %d",array[index],array[index+1]);
            printf("\nThere is no greater Element");
        }
        if(array[index+1] > array[index])
        {
            printf("\nElement greater than %d is : %d",array[index],array[index+1]);
            printf("\nThere is no lesser Element");
        }
        
        return;
    }
    
    if(array[index-1] < array[index])
    {
        printf("\nElement lesser than %d is : %d",array[index],array[index-1]);
    }
    if(array[index-1] > array[index])
    {
        printf("\nElement greater than %d is : %d",array[index],array[index-1]);
    }
    if(array[index+1] < array[index])
    {
        printf("\nElement lesser than %d is : %d",array[index],array[index+1]);
    }
    if(array[index+1] > array[index])
    {
        printf("\nElement greater than %d is : %d",array[index],array[index+1]);
    }
    return;
}

// function to swap the array elements
int Find_Element_Index(int *array , int n , int num)
{ 
    // declare some local variables
    int i=0 , index=-1;

    for(i=0 ; i<n ; i++)
    {
        if(array[i] == num)
            index = i;
    }
    return index;
}

// main function
int main()
{
    // declare two int arrays
    int array_1[30] = {0};
    // declare some local variables
    int i=0 ,n=0 , num=0 , index=0;
    
    printf("\nEnter the number of elements for the arrray : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array_1[%d] : ",i);
        scanf("%d",&array_1[i]);
    }
    
    printf("\nEnter the number : ");
    scanf("%d",&num);
    
    // Find the index of that element in the array
    index = Find_Element_Index(array_1 , n , num);
    if(index<0)
    {
        printf("\nNumber not found in the array list");
        printf("\nPlease try again\n");
    }
    else
    {
        // now find the nearest lesser and nearest greater element
        // from the array
        Find_Lesser_Greater_Element(array_1 , n , index);
    }
    
    return 0;
}
