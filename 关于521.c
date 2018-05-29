 
#include <stdio.h>

int main(void)
{
	int ad[2][1000001]={0};
	int n=0,m=0;
	int a,b;
	int t1,t2,t5;
	int tem;
	int k;
	int t;
	int c=1;
	for(int q=0;q<=1000000;q++){
		t=q;
		t1=0,t2=0,t5=0;
		tem=m;
		while(t){
			k=t%10;
			if(k==1){
				t1++;
				if(m==tem){
					int q=(t/10)%10;
					if(q==2){
						int w=(t/100)%10;
						if(w==5)
							m++;
					}
				}
				t=t/10;
				continue;
			}
			if(k==2){t2++;t=t/10;continue;}
			if(k==5){t5++;t=t/10;continue;}
			t=t/10;
		}
		if((t1*t2*t5)!=0)
			n++;
		ad[0][q]+=n;
		ad[1][q]+=m;
	}
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("Case %d:%d %d\n",c++,ad[0][b]-ad[0][a-1],ad[1][b]-ad[1][a-1]);
	}
}        