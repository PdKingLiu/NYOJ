#include <stdio.h>
int main()
{
	int a,b,c;
	int i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=10;i<=100;i++){
		if(i%3==a && i%5==b && i%7==c)
			break;
	}
	if(i!=101)
		printf("%d",i);
	else
		printf("No answer");
	return 0;
}