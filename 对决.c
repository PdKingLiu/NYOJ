 
#include <stdio.h>
int main(void)
{
	int a,b;
	int i;
	while(scanf("%d%d",&a,&b)==2 && (a!=0 && b!=0)){
		for(i=1;i<=a/2;i++){
			if(i*(a-i)==b)
				break;
		}
		if(i<=a/2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}        