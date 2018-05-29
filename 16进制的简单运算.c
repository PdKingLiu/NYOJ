 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int fan(char c){
	if(islower(c))
		return (int)(c-87);
	if(isupper(c))
		return (int)(c-55);
	if(isdigit(c))
		return (int)(c-48);
}
int main (void)
{
	char ch[100];
	int n;
	scanf("%d",&n);
	int l;
	int i;
	int a,b;
	getchar();
	while(n--){
		a=0;
		b=0;
		gets(ch);
		l=strlen(ch);
		for(i=0;i<l;i++){
			if(ch[i]=='+' || ch[i]=='-')
				break;
		}
		for(int j=0;j<i;j++)
			a=a*16+fan(ch[j]);
		for(int j=i+1;j<l;j++)
			b=b*16+fan(ch[j]);
		if(ch[i]=='+')
			printf("%o\n",a+b);
		else
			printf("%o\n",a-b);

	}
	return 0;
}        