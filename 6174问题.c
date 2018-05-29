 
#include <stdio.h>
void p(int *a){
	int tem;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]>a[j]){
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
		}
	}
}
int b(int n){
	int tem=n;
	int a[4];
	int min=0,max=0;
	for(int i=0;i<4;i++){
		a[i]=tem%10;
		tem=tem/10;
	}
	p(a);
	for(int i=0;i<4;i++){
		min=min*10+a[i];
		max=max*10+a[3-i];
	}
	return (max-min);
}
int main()
{
	int n;
	int a;
	int tem;
	int tem2;
	int k;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		tem=a;
		tem2=b(a);
		k=1;
		while(tem!=tem2){
			tem=tem2;
			tem2=b(tem);
			k++;
		}
		printf("%d\n",k);

	}

	return 0;
}        