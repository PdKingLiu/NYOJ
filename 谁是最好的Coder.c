 
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int a,b;
	int max;
	while(scanf("%d",&n)==1 && n!=0){
		max=0;
		while(n--){
			scanf("%d%d",&a,&b);
			if(a+b>max)
				max=a+b;
		}
		printf("%d\n",max);
	}
	return 0;
}        