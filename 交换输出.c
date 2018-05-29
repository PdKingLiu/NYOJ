 
#include <stdio.h>
int mi(int *a,int n){
	int min=0;
	for(int i=1;i<n;i++){
		if(a[i]<a[min])
			min=i;
	}
	return min;
}
int main(void)
{
	int n;
	int a[100]={0};
	scanf("%d",&n);
	int min;
	while(n){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		min=mi(a,n);
		if(a[0]==a[min]){
			for(int i=0;i<n;i++)
				printf("%d ",a[i]);
		}
		else{
			int tem=a[min];
			a[min]=a[0];
			a[0]=tem;
			for(int i=0;i<n;i++)
				printf("%d ",a[i]);
		}
		printf("\n");
		scanf("%d",&n);

	}
	return 0;
}        