 
#include <stdio.h>
int main(void)
{
	int q[10000]={0};
	int q2[10000]={0};
	int a,b;
	int max=0;
	int n=0;
	int m=0;
	int tem;
	while((scanf("%d%d",&a,&b))==2 && (a!=0 && b!=0)){
		
		tem=0;
		if(a>max)
			max=a;
		q[a]+=b;
		for(int i=0;i<=m;i++){
			if(q2[i]==a)
				tem=1;
		}
		if(tem==0)
			q2[m++]=a;
	}
	for(int i=0;i<m;i++){
		printf("%d %d\n",q2[i],q[q2[i]]);
	}
	return 0;
}        