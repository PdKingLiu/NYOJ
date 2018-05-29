 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	int n;
	char ch[210];
	int l;
	int sum;
	scanf("%d",&n);
	getchar();
	while(n--){
		sum=0;
		gets(ch);
		l=strlen(ch);
		for(int i=0;i<l;i++){
			if(islower(ch[i]))
				sum++;
		}
		sum=(sum%26);
		if(sum==0)
			printf("%c\n",'z');
		else
			printf("%c\n",sum+96);

	}
	return 0;
}        