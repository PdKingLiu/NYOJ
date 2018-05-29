 
#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	float l;
	float a,b,c,d;
	scanf("%d",&n);
	while(n--){
		scanf("%f %f %f %f",&a,&b,&c,&d);
		l=sqrt((c-a)*(c-a)+(d-b)*(d-b));
		printf("%.2f\n",l);
	}
	return 0;
}        