 
#include <stdio.h>
#include <string.h>
void p(char ch[][30],int n){
	char t[30];
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			int l1=strlen(ch[j-1]);
			int l2=strlen(ch[j]);
			if(l1>l2){
				t[0]='\0';
				strcat(t,ch[j]);
				ch[j][0]='\0';
				strcat(ch[j],ch[j-1]);
				ch[j-1][0]='\0';
				strcat(ch[j-1],t);
			}
		}
	}
}
int main(void)
{
	
	char ch[100][30];
	int m;
	int h=1;
	while(scanf("%d",&m)==1 && m!=0){
		
		getchar();
		for(int i=0;i<m;i++)
			gets(ch[i]);
		p(ch,m);
		printf("SET %d\n",h++);
		if(m%2==0){
			for(int i=0;i<m;i+=2)
				printf("%s\n",ch[i]);
			for(int i=m-1;i>=0;i-=2)
				printf("%s\n",ch[i]);
		}
		else{
			for(int i=0;i<m;i+=2)
				printf("%s\n",ch[i]);
			for(int i=m-2;i>=0;i-=2)
				printf("%s\n",ch[i]);
		}
	}
	return 0;
}        