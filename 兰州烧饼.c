 
#include <stdio.h>  
int main()  
{  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        if(n<=m)  
            printf("%d\n",2);  
        else if(n*2%m!=0)  
            printf("%d\n",(n*2/m)+1);  
        else if(n*2%m==0)  
            printf("%d\n",(n*2/m));  
    }  
    return 0;  
}          