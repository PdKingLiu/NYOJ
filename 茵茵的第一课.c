 
#include <stdio.h>
int main(void)
{
	int n;
	char ch[100];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		puts(ch);
	}
	return 0;
}        