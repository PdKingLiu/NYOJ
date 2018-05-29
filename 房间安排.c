 
#include<stdio.h>  
int main ()  
{  
    int T,n,a,b,c;  
    scanf("%d",&T);  
    while (T--)  
    {  
        int s[200]={0};  
        scanf("%d",&n);  
        int t=0;  
        while(n--)  
        {  
            scanf("%d %d %d",&a,&b,&c);  
            for(int i=b;i<b+c;i++)  
            {  
                s[i]=s[i]+a; 
            }  
            for(int j=0;j<200;j++)  
            {  
                if(t<s[j])  
                t=s[j];  
            }  
        }  
        printf("%d\n",t);  
    }  
    return 0;  
}           