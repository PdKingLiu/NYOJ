 
#include <stdio.h>
int main(void)
{
	double a[12];
	double sum=0;
	for(int i=0;i<12;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	sum/=12;
	printf("%.2f",sum);
	return 0;
}        