#include <stdio.h>
int main()
{
	int n;
	int k;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			if(i%2!=0)
				printf("%d ",i);
		}
		printf("\n");
		for(int i=1;i<=k;i++){
			if(i%2==0)
				printf("%d ",i);
		}
		printf("\n");
	}
}