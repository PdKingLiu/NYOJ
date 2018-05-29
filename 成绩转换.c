 
#include <stdio.h>
int main()
{
	int n;
	int g;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&g);
		if(g<=59){
			printf("E\n");
			continue;
		}
		if(g<=69){
			printf("D\n");
			continue;
		}
		if(g<=79){
			printf("C\n");
			continue;
		}
		if(g<=89){
			printf("B\n");
			continue;
		}
		if(g<=100){
			printf("A\n");
			continue;
		}
	}
	return 0;
}        