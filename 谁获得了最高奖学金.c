 
#include<stdio.h>  
struct student  
{  
    char name[20];  
    int qimo;  
    int banyi;  
    char bangan;  
    char xibu;  
    int lunwen;  
    int jiangjin;  
}a[102];  
int main()  
{  
    int n,x,k,i;  
    scanf("%d",&n);  
    while(n--)  
    {  
        scanf("%d",&x);  
        for(i=0;i<x;i++)  
        a[i].jiangjin=0;  
        for(i=0;i<x;i++)  
            scanf("%s %d %d %c %c %d",a[i].name,&a[i].qimo,&a[i].banyi,&a[i].bangan,&a[i].xibu,&a[i].lunwen);  
       for(i=0;i<x;i++)  
       {  
        if(a[i].qimo>80&&a[i].lunwen>=1)  
        a[i].jiangjin=a[i].jiangjin+8000;  
        if(a[i].qimo>85&&a[i].banyi>80)  
            a[i].jiangjin=a[i].jiangjin+4000;  
        if(a[i].qimo>90)  
            a[i].jiangjin=a[i].jiangjin+2000;  
        if(a[i].qimo>85&&a[i].xibu=='Y')  
            a[i].jiangjin=a[i].jiangjin+1000;  
        if(a[i].banyi>80&&a[i].bangan=='Y')  
            a[i].jiangjin=a[i].jiangjin+850;  
       }  
      int  z=0,t=-1;  
       for(i=0;i<x;i++)  
       {  
           z=z+a[i].jiangjin;  
           if(a[i].jiangjin>t)  
           {  
               t=a[i].jiangjin;  
               k=i;  
           }  
       }  
       printf("%s\n%d\n%d\n",a[k].name,a[k].jiangjin,z);  
    }return 0;  
}          