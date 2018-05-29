 
#include<stdio.h>  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    while(T--)  
    {  
        int n,b=0;  
        scanf("%d",&n);  
        for(int i=2;i*i<=n+1;i++)  
        {  
            if((n+1)%i==0)  
            {  
                b++;  
            }  
        }  
        printf("%d\n",b);  
    }  
    return 0;  
}          