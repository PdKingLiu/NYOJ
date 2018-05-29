 
#include <stdio.h>
void p(int *a){
	int tem;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(a[i]>a[j]){
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
		}
	}
}

int main()
{
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	p(a);
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d",a[2]);
	return 0;
}        