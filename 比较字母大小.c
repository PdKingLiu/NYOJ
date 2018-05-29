 
#include <stdio.h>
int main(void)
{
	int n;
	char ch1,ch2;
	scanf("%d",&n);
	getchar();
	while(n--){
		ch1=getchar();
		getchar();
		ch2=getchar();
		getchar();
		if(ch1<ch2)
			printf("%c>%c\n",ch1,ch2);
		else if(ch1>ch2)
			printf("%c<%c\n",ch1,ch2);
		else
			printf("%c=%c\n",ch1,ch2);
	}
	return 0;
}        