#include <stdio.h>
int main()
{
	int k;
	int ji,tu;
	int n,m;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&m);
		ji=2*n-m*0.5;
		tu=0.5*m-n;
		if(ji<0 || tu<0){
			printf("No answer\n");
			continue;
		}
		if(((ji+tu)==n)&&((2*ji+4*tu)==m))
			printf("%d %d\n",ji,tu);
		else
			printf("No answer\n");
	}
	return 0;
}        
