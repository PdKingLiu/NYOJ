 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int n;
	int l;
	char ch[50];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		l=strlen(ch);
		for(int i=0;i<l;i++){
			if(!islower(ch[i]))
				ch[i]='.';
		}
		for(int i=l-1;i>=0;i--){
			if(ch[i]!='.')
				printf("%c",ch[i]);
		}
		printf("\n");
	}
	return 0;
}        