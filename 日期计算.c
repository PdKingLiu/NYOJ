 
#include <stdio.h>
int tex(int a,int b,int c){
	int sum=0;
	int qr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int qp[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((a%4)==0 && (a&100)!=0){		//r
		for(int i=0;i<(b-1);i++)
			sum+=qr[i];
		sum+=c;
	}
	else{
		for(int i=0;i<(b-1);i++)
			sum+=qp[i];
		sum+=c;	
	}
	return sum;
}
int main()
{
	int a,b,c;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		printf("%d\n",tex(a,b,c));
	}
	return 0;
}        