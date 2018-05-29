 
#include<stdio.h>  
#include<cstring>  
#include<iostream>  
#include<algorithm>  
#include<math.h>  
#include<stdlib.h>  
#include<stack>  
#include<vector>  
#include<string.h>  
#include<map>  
#define INF 0x3f3f3f3f3f  
using namespace std;  
int main()  
{  
    char a[111];  
    while(scanf("%s",a+1)!=EOF)  
    {  
        int l=strlen(a+1),tt=0;   
        int b[101];  
       memset(b,0,sizeof(b));  
  
        a[0]='0';  
        a[l+1]='0';  
        a[l+2]='0';  
        a[l+3]='0';  
        a[l+4]='0';  
        if(a[1]=='-')  
        {  
            tt=1;  
            a[1]='0';  
            printf("(");  
        }   
        int flag=1;  
        int biao=0,flag2=0;  
        for(int i=1; i<=l; i++)  
        {    
            if(a[i]=='.')  
            {  
                flag2=1;  
            }  
            if(a[i]!='0'&&a[i]!='.')  
            {  
                flag=i;  
                biao=1;  
                break;  
            }  
            if(biao==0&&a[i]=='.')  
            {  
                flag=i-1;  
                break;  
            }  
            if(biao==0&&flag2==0)  
            {  
                flag=l;  
            }  
        }  
        int k=0,temp=0,flag1=l+1;  
        for(int i=flag; i<=l; i++)  
        {  
  
            if(a[i]=='.')  
            {  
                temp=1;  
                flag1=i;  
                continue;  
            }  
            if(temp==0)  
            {  
                k++;  
            }  
        }  
        int p=0;  
        for(int i=flag; i<flag1; i++)  
        {  
            p+=1;  
            b[p]=a[i]-'0';  
        }  
        p+=1;  
        b[p]=a[flag1+1]-'0';  
        p+=1;  
        b[p]=a[flag1+2]-'0';  
        int t=1;  
        if(a[flag1+3]>='5')  
        {  
            int c=1,sum;  
            for(int i=p; i>=1; i--)  
            {  
                sum=b[i]+c;  
                c=sum/10;  
                b[i]=sum%10;  
            }  
            if(c>0)  
            {  
                t=0;  
                b[0]=1;  
            }  
        }  
if(t==0)  
{  
    if((p-2)%3==0)  
    {  
        printf("1,");  
    }  
    else  
    {  
        printf("1");  
    }  
}  
        int summ=0;  
        for(int i=1; i<=p-2; i++)  
        {  
            int t1=k%3;  
            if(t1!=0&&i<=t1)  
            {  
                printf("%d",b[i]);  
            }  
            else  
            {  
                if((p-2-i+1)%3==0)  
                {  
                    if((p-2)%3==0)  
                    {  
                        if(i==1)  
                        {  
                            printf("%d",b[i]);  
                        }  
                        else  
                        {  
                            printf(",%d",b[i]);  
                        }  
                    }  
                    else  
                    {  
                        printf(",%d",b[i]);  
                    }  
  
                }  
                else  
                {  
                    printf("%d",b[i]);  
                }  
            }  
        }  
        printf(".%d%d",b[p-1],b[p]);  
        if(tt==1)  
        {  
            printf(")\n");  
        }  
        else  
        {  
            printf("\n");  
        }  
        memset(a+1,'0',sizeof(a+1));  
    }  
}               