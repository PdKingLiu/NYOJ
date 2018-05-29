 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,l,tem;
	char ch[110];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		l=strlen(ch);
		if(l%2!=0){
			printf("%d\n",l);
			continue;
		}	
		while(l>1){
			tem=0;
			for(int i=0;i<l/2;i++){
				if(ch[i]!=ch[l-i-1]){
					tem=1;
					break;
				}
			}
			if(tem==1)
				break;
			else
				l=l/2;
			if(l%2!=0){
				break;
			}
		}
		printf("%d\n",l);

	}
	return 0;
}        