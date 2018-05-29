 
#include <stdio.h>
int a[1000010];
void f(int *a){
	int tem;
	int k1,k2;
	for(int i=0;i<1000010;i++){
		tem=a[i];
		int n=0;
		int k;
		while(tem){
			if(tem%10>6){
				a[i]=111111;
				break;
			}
			tem/=10;
		}
		tem=a[i];
		while(tem&&n<5){
			k1=tem%10;
			tem=tem/10;
			k2=tem%10;
			
			if(k1-k2>4 || k1-k2<-4){
				a[i]=111111;
				break;
			}
			n++;
		}
		int m1,m2,m3;
		if(a[i]!=111111){
			tem=a[i];
			while(tem){
				m1=tem%10;
				
				m2=(tem/10)%10;
				m3=(tem/100)%10;
				if(m1==m2 && m2==m3){
					a[i]=111111;
					break;
				}
				tem/=10;	
			}
		}
	}
}
int ad(int a)
{
	int n=0;
	while(a){
		a/=10;
		n++;
	}
	return n;
}
int main(int argc, char const *argv[])
{

	for(int i=0;i<1000010;i++)
		a[i]=i;
	f(a);
	int n;
	int w,e;

	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&w,&e);
		if(w<1000)
			w=1000;
		for(int i=w;i<=e;i++){
			if(a[i]==111111)
				continue;
			int h=ad(a[i]);
			for(int j=0;j<6-h;j++)
				printf("0");
			printf("%d\n",a[i]);
		}
	}
	return 0;
}        