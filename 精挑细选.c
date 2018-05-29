#include <stdio.h>
int main(void)
{
	int n;
	int m;
	int a,b,c;
	
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		scanf("%d%d%d",&a,&b,&c);
		int m1=a,m2=b,m3=c;
		for(int i=1;i<m;i++){
			scanf("%d%d%d",&a,&b,&c);
			if(a>m1 || (a==m1 && b<m2) || ((a==m1 && b==m2)) && m3<c){
				m1=a;m2=b;m3=c;
			}
		}printf("%d\n",m3);
	}
	return 0;
}