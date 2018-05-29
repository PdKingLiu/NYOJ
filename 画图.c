 
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++)
			printf("*");
		printf("\n");
	}
	for(int j=0;j<n;j++)
			printf("*");
	return 0;
}        