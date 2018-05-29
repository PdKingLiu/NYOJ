 
#include <stdio.h>
void spai(int *a,int n){
	for(int i=1;i<n;i++){
		for(int j=i;j>=1;j--){
			if(a[j]<a[j-1]){
				int tem=a[j];
				a[j]=a[j-1];
				a[j-1]=tem;
			}
		}
	}
}
void b(int *a,int n){
	int k=1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i])
				a[j]=0;
		}
	}
}
int main(void)
{
	int n;
	int k;
	int t;
	int a[200];
	scanf("%d",&n);
	while(n--){
		t=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++)
			scanf("%d",&a[i]);
		spai(a,k);
		b(a,k);
		for(int i=0;i<k;i++){
			if(a[i]!=0)
				t++;
		}
		printf("%d\n",t);
		for(int i=0;i<k;i++){
			if(a[i]!=0)
				printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}        