 
#include <stdio.h>
int main(void)
{
	int n;
	long long int a;
	scanf("%d",&n);
	while(n--){
		scanf("%lld",&a);
		if(a-1)
			printf("%lld471\n",a-1);
		else
			printf("471\n");
	}
	return 0;
}        