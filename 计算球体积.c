 
#include <stdio.h>
int main(void)
{
	double r;
	double v;
	double pi=3.1415926;
	while(scanf("%lf",&r)!=EOF){
		v=(4.0/3.0)*pi*r*r*r;
		printf("%.0f\n",v);
	}
	return 0;
}        