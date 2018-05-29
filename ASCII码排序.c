#include <stdio.h>
int main()
{
	int n;
	char a,b,c,d;
	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%c%c%c",&b,&c,&d);
		getchar();
		if(c>d){
			a=d;
			d=c;
			c=a;
		}
		if(b>d){
			a=d;
			d=b;
			b=a;
		}
		if(b>c){
			a=b;
			b=c;
			c=a;
		}
	printf("%c %c %c\n",b,c,d);
	}
}