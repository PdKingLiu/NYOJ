 
#include <stdio.h>
#include <string.h>
int zwz(char *ch,char c,int m,int n){
	int k=1;
	for(int j=m;j<n;j++){
		if(ch[j]==c){
			k++;
			ch[j]='0';
		}
	}
	return k;
}
void pai(char *aq,int n){
	for(int i=1;i<n;i++){
		for(int j=i;j>=1;j--){
			if(aq[j]<aq[j-1]){
				char t=aq[j];
				aq[j]=aq[j-1];
				aq[j-1]=t;
			}
		}
	}
}
int main(void)
{
	int n;
	char ch[1020];
	char ch2[100];
	int a[1020]={0};
	int l;
	scanf("%d",&n);
	getchar();
	int max;
	int h;
	while(n--){
		h=0;
		gets(ch);
		l=strlen(ch);
		for(int i=0;i<l;i++){
			a[i]=0;
			if(ch[i]!='0')
				a[i]=zwz(ch,ch[i],i+1,l);
		}
		max=a[0];
		for(int i=0;i<l;i++){
			if(a[i]>max)
				max=a[i];
		}
		for(int i=0;i<l;i++){
			if(a[i]==max)
				ch2[h++]=ch[i];
		}
		pai(ch2,h);
		printf("%c\n",ch2[0]);

	}
	return 0;
}        