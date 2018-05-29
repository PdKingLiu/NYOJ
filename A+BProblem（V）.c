 
#include <stdio.h>
int wei(int a){
	int k=0;
	while(a){
		a=a/10;
		k++;
	}
	return k;
}
int bian(int a){
	int w=wei(a);
	int b=0;
	while(a){
		b=b*10+(a%10);
		a=a/10;
	}
	return b;
}
int main(void)
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2 && (a!=0 && b!=0))
	{
		printf("%d\n",bian(a)+bian(b));
	}
	return 0;
}        