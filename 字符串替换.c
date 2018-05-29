 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[1000];
	char c[4]="you";
	char *t;
	int l;
	while(gets(ch)!=NULL){
		l=strlen(ch);
		while((t=strstr(ch,c))!=NULL){
			t[0]='.';
			t[1]='w';
			t[2]='e';
		}
		for(int i=0;i<l;i++){
			if(ch[i]!='.')
				printf("%c",ch[i]);
		}
		printf("\n");
	}
	return 0;
}        