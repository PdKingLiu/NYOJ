 
#include <stdio.h>
int main(void)
{
	int n;
	float m,x,y,z;
	scanf("%d",&n);
	while(n--){
		scanf("%f%f%f%f",&m,&x,&y,&z);
		printf("%.2f\n",(m*x*z)/(y-x));
	}
	return 0;
}        