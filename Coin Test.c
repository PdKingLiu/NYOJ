 
#include <stdio.h>
int yue(int a,int b){
	for(int i=a;i>=1;i--){
		if(b%i==0 && a%i==0)
			return i;
	}
}
int main()
{
	int  n;
	double l=0,r=0;
	int s=0;
	int y;
	scanf("%d",&n);
	getchar();
	char ch[n+10];
	gets(ch);
	for(int i=0;i<n;i++){
		if(ch[i]=='U')
			r++;
		else if(ch[i]=='D')
			l++;
		else
			s=1;
	}
	if(s==1){
		printf("Bingo\n");
		return 0;
	}
	if((r*2)==n){
		printf("1/2\n");
		return 0;
	}

	if((r/n)>=0.03 && (r/n)<0.5){
		y=yue(r,n);
		printf("%d/%d\n",(int)(r/y),(int)(n/y));
	}
	else
		printf("Fail\n");



	return 0;
}        