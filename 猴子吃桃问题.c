 
#include <stdio.h>
int main(void)
{
	int n;
	int k;
	int i;
	int t;
	scanf("%d",&n);
	while(n--){
		t=1;
		scanf("%d",&k);
		for(i=1;i<=k;i++){
			t=(t+1)*2;
		}
		printf("%d\n",t);
	}
	return 0;
}        