 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int n;
	int l;
	char ch[110];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		l=strlen(ch);
		for(int i=0;i<l;i++){
			if(islower(ch[i]))
				ch[i]=toupper(ch[i]);
			else
				ch[i]=tolower(ch[i]);
		}
		puts(ch);
	}
	return 0;
}        