 
#include <stdio.h>
int we(int n,int m){
	int k=0;
	while(n%m==0){
		n=n/m;
		k++;
	}
	return k;
}
int qw(int n,int m){
	int i;
	int sum=0;
	for(i=m;i<=n;i++){
		if(i%m==0){
			sum+=we(i,m);
		}
	}
	return sum;
}
int main(void)
{
	int k;
	int n,m;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&m);
		printf("%d\n",qw(n,m));
	}
	return 0;
}        