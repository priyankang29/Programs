#include <stdio.h>
#include <stdlib.h>
int G[100][100],visited[100],n;
 void DFS(int i)
 {
     int j;
     printf("%d\t",i);
     visited[i]=1;
     for(j=0;j<n;j++)
     {
         if(!visited[j] && G[i][j]==1)
            DFS(j);
     }
 }
 int main()
 {

    int i,j;
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix of the graph:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&G[i][j]);
    }
    for(i=0;i<n;i++)
    visited[i]=0;
    DFS(0);
    return 0;
}
