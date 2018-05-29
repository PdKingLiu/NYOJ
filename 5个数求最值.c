#include <stdio.h>
void p(int *a,int n){
	int tem;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
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
	int a[5];
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	p(a,5);
	printf("%d %d\n",a[0],a[4]);
	return 0;
}