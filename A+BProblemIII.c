 
#include <stdio.h>
int main(void)
{
	float a,b,c;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%f%f%f",&a,&b,&c);
		if((a+b-c)>=-0.00001&&(a+b-c)<=0.00001)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}        