 
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;
	int n;
	int m;
	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%c",&c);
		scanf("%d",&m);
		getchar();
		if(isupper(c))
			printf("%d\n",(int )c-64+m);
		else
			printf("%d\n",(-1)*((int )c-96)+m);
	}
	return 0;
}        