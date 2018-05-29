 
#include <stdio.h>
int bei(int a,int b){
	for(int i=b;;i+=b){
		if(i%a==0)
			return i;
	}
}
int yue(int a,int b){
	for(int i=a;i>=1;i--){
		if(b%i==0 && a%i==0)
			return i;
	}
}
int main(void)
{
	int n;
	int i,j;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&i,&j);
		int t=i;
		if(i>j){
			t=i;
			i=j;
			j=t;
		}
		printf("%d %d\n",yue(i,j),bei(i,j));

	}
	return 0;
}        