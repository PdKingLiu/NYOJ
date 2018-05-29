#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	long long int sum;
	long long int a;
	while(n--){
		sum=0;
		int i;
		scanf("%lld",&a);
		for(i=1;;i++){
			sum+=10;
			if(sum>=a)
				break;
			sum-=5;
		}
		printf("%d\n",i);

	}
	return 0;
}