 
#include <stdio.h>
int man(int a,int b){
	int a1=a/100;
	int a2=(a/10)%10;
	int a3=a%10;
	int b1=b/100;
	int b2=(b/10)%10;
	int b3=b%10;
	int n=0;
	if((a3+b3)>=10)
		n++;
	a2+=(a3+b3)/10;
	if((a2+b2)>=10)
		n++;
	a1+=(a2+b2)/10;
	if((a1+b1)>=10)
		n++;
	return n;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2 && (a!=0 && b!=0))
	{
		printf("%d\n",man(a,b));
	}
	return 0;
}        