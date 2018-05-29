 
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    int l;
    int i;
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        gets(ch);
        l=strlen(ch);
        for(i=1;i<l;i++){
            if(ch[i]!='0')
                break;
        }
        if(i==l){
            printf("0\n");
            continue;
        }
        for(int j=i;j<l;j++)
            putchar(ch[j]);
        printf("\n");
    }
    return 0;
}        