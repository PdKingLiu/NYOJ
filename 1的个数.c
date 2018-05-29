 
#include <stdio.h>
int main(void)
{
	int n;
	int a;
	int k;
	scanf("%d",&n);
	while(n--){
		k=0;
		scanf("%d",&a);
		while(a){
			if(a%2==1)
				k++;
			a=a/2;
		}
		printf("%d\n",k);
	}
	return 0;
}        