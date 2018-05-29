 
#include <stdio.h>
int main(void)
{
	int n;
	int a,b;
	int sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		sum=a;
		while(a/b>0){
			sum+=a/b;
			a=(a/b)+(a-(a/b)*b);
		}
		printf("%d\n",sum);
	}
	return 0;
}        