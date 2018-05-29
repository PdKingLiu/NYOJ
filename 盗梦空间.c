#include <stdio.h>
int b(char *ch){
	int i;
	for(i=0;;i++){
		if(ch[i]==' ')
			break;
	}
	int sum=0;
	for(int j=i+1;ch[j]!='\0';j++){
		sum=sum*10+(int)ch[j]-48;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n;
	char ch[101][20];
	scanf("%d",&n);
	int k;
	while(n--){
		scanf("%d",&k);
		getchar();
		for(int i=0;i<k;i++)
			gets(ch[i]);
		float time=1;
		float ti=0;
		for(int i=0;i<k;i++){
			if(ch[i][0]=='I')
				time*=20;
			if(ch[i][0]=='S'){
				ti+=b(ch[i])/time;
			}
			if(ch[i][0]=='O')
				time/=20;
		}
		printf("%g\n",ti*60);
	}
	return 0;
} 