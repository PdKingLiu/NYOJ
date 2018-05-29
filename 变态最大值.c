#include <stdio.h>
int a[10100];
int q[10000];
void spi(int *a,int m)
{
	for(int i=1;i<m;i++){
		for(int j=i;j>0;j--){
			if(a[j]>a[j-1]){
				int tem=a[j];
				a[j]=a[j-1];
				a[j-1]=tem;
			}
		}
	}
}
int main(void)
{
	int n;
	int max;
	int min;
	int m;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		max=a[0];
		for(int i=0;i<n;i++){
			if(((i/3)%2)!=0)
				continue;
			if(a[i]>max)
				max=a[i];
		}
		m=0;
		if(n>3){
			for(int i=3;i<n;i+=6){
				min=a[i];
				if(a[i]>a[i+1])
					min=a[i+1];
				if(a[i+2]<min)
					min=a[i+2];
				q[m++]=min;
			}
			spi(q,m);
			min=q[0];
			printf("%d\n",max>min?max:min);
		}
		else
			printf("%d\n",max);
	}
	return 0;
}