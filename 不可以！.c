 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		if((!(a*b+abs(a*b))) && a*b){
			printf("Signs are opposite\n");
			continue;
		}
		if(!(a*b)){
			printf("Signs can't be sure\n");
			continue;
		}
		if(a*b){
			printf("Signs are not opposot\n");
		}
	}
	return 0;
}        