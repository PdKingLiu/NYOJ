#include <stdio.h>
int y(int n){
	int a=n%10;
	int b=(n%100)/10;
	int c=n/100;
	if((a*a*a + b*b*b + c*c*c)==n)
		return 1;
	else
		return 0;
}
int main(int argc, char const *argv[])
{
	int a;
	while(1){
		scanf("%d",&a);
		if(a==0)
			break;
		else{
			if(y(a))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}