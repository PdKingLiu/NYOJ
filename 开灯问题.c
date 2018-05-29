 
#include <stdio.h>
int main(void)
{
	int n,k;
	int a[1000]={0};
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
		a[i]=i;
	for(int j=2;j<=k;j++){
		for(int i=1;i<=n;i++){
			if(i%j==0){
				if(a[i]==0)
					a[i]=i;
				else
					a[i]=0;
			}
		}
	}
	for (int i = 0; i <= n; ++i)
	{
		if(a[i]!=0)
			printf("%d ",a[i]);
	}
	return 0;
}        