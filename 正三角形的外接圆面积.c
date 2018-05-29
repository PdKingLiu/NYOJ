 
#include <stdio.h>
int main(void)
{
	double pi=3.1415926;
	const double t=1.7320508075;
	int n;
	double k;
	scanf("%d",&n);
	while(n--){
		scanf("%lf",&k);
		printf("%.2f\n",(pi*k*k)/3.0);
	}
	return 0;
}        