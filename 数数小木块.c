 
#include <stdio.h>
int main(void)
{
	int n;
	int k;
	int sum;
	scanf("%d",&n);
	while(n--){
		sum=0;
		scanf("%d",&k);
		for(int i=1;i<=k;i++)
			sum+=(i*(i+1)/2);
		printf("%d\n",sum);
	}
	return 0;
}        