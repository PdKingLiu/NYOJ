 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	int l;
	char ch[1001];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		int r=0,w=0,b=0;
		l=strlen(ch);
		for(int i=0;i<l;i++){
			if(ch[i]=='R'){r++;continue;}
			if(ch[i]=='W'){w++;continue;}
			if(ch[i]=='B'){b++;continue;}
		}
		for(int i=0;i<r;i++)printf("R");
		for(int i=0;i<w;i++)printf("W");
		for(int i=0;i<b;i++)printf("B");
		printf("\n");
	}
	return 0;
}        