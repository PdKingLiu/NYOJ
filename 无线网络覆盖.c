 
#include <stdio.h>
#include <math.h>
int main(void)
{
	
	int n;
	float L,D,R;
	float t;
	float k;
	scanf("%d",&n);
	while(n--){
		scanf("%f%f%f",&L,&D,&R);
		if((2*R)<=D){
			printf("impossible\n");
			continue;
		}
		t=sqrt((R*R)-(0.25*D*D));
		k=L/t;
		if(((int)k)%2!=0)
			printf("%d\n",(((int)k)+1)/2);
		else{
			if((k-((int)k))<1e-6)
				printf("%d\n",((int)k)/2);
			else
				printf("%d\n",(((int)k)/2)+1);
		}

	}
	return 0;
}        