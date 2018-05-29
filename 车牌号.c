 
#include <stdio.h>
#include <string.h>
void pai(char ch[][7],int n){
	char t[10];
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(strcmp(ch[j],ch[j-1])<0){
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
	
	int n;
	int k;
	char p[100][7];
	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%d",&k);
		getchar();
		for(int i=0;i<k;i++)
			gets(p[i]);
		pai(p,k);

		puts(p[0]);
	}
	return 0;
}        