 
#include <stdio.h>
int xjie(int a){
	int sum=1;
	for(int i=1;i<=a;i+=2){
		sum*=i;
	}
	return sum;
}
int suma(int a){
	int sumaa=0;
	for(int i=1;i<=a;i++){
		sumaa+=xjie(i);
	}
	return sumaa;
}
int main(void)
{
	int n;
	int h;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&h);
		printf("%d\n",suma(h));
	}
	return 0;
}        