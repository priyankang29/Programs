//Write a program to sort the names of students.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char names[5][10], temp[10];
    int i, n, j;
    clrscr();
    printf("\n Enter the number of students : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of student %d : ", i+1);
        gets(names[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n–i–1;j++)
        {
            if(strcmp(names[j], names[j+1])>0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    printf("\n Names of the students in alphabetical order are : ");
    for(i=0;i<n;i++)
        puts(names[i]);
    getch();
    return 0;
}
/*
Output
Enter the number of students : 3
Enter the name of student 1 : Goransh
Enter the name of student 2 : Aditya
Enter the name of student 3 : Sarthak
Names of the students in alphabetical order are : Aditya Goransh Sarthak
*/