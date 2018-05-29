 
#include<stdio.h>  
int main()  
{  
    long long int m,n,i;  
    long long int ans,sum1,sum2;  
    while(~scanf("%lld%lld",&m,&n))  
    {  
        sum1=sum2=0;  
        for(i=1;i<=m;i++)  
        sum1=sum1+i;  
        for(i=1;i<=n;i++)  
        sum2=sum2+i;  
        ans=sum1*sum2;  
        printf("%lld\n",ans);  
    }  
    return 0;  
}          