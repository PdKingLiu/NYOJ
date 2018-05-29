 
#include <stdio.h>
int main(void)
{
	int n;
	int k;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			for(int j=i;j<=9;j++){
				printf("%d*%d=%d ",i,j,i*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}        