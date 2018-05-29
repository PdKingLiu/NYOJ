 
#include <stdio.h>
int main()
{
    int n;
    int k=1;
    int c=1;
    int a[100][100]={0};
    scanf("%d",&n);
    int x=0,y=n-1;
    a[x][y]=k;
    while(c<n*n){
        while(x<n-1 && !a[x+1][y])
            a[++x][y]=++c;
        while(y>0 && !a[x][y-1])
            a[x][--y]=++c;
        while(x>0 && !a[x-1][y])
            a[--x][y]=++c;
        while(y<n && !a[x][y+1])
            a[x][++y]=++c;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}        