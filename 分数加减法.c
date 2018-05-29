 
#include <stdio.h>
#include <math.h>
int yue(int a,int b){
	for(int i=a;i>=1;i--){
		if(b%i==0 && a%i==0)
			return i;
	}
}
int main(void)
{
	int a,b,c,d;
	int t;
	int tem;
	char ch[10];
	while((scanf("%s",ch))!=EOF){
		a=(int)(ch[0]-48);
		b=(int)(ch[2]-48);
		c=(int)(ch[4]-48);
		d=(int)(ch[6]-48);
		a=a*d;
		c=c*b;
		b=b*d;
		d=b;
		if(ch[3]=='+'){
			t=a+c;
			b=yue(t,d);
			if(t%d==0)
				printf("%d\n",t/d);
			else
				printf("%d/%d\n",t/b,d/b);

		}
		else{
			t=a-c;
			if(t<0)
				tem=-t;
			else
				tem=t;
			if(t==0){
				printf("0\n");
				continue;
			}
			b=yue(tem,d);
			if(tem%d==0)
				printf("%d\n",t/d);
			else
				printf("%d/%d\n",t/b,d/b);

		}
	}
	return 0;
}        