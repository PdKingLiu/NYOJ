 
#include <stdio.h>
void er(int n){
	if(n>1)
		er(n/2);
	printf("%d",n%2);
}
int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF){
		er(n);
		printf("\n");
	}
	return 0;
}        