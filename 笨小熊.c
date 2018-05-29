 
#include <stdio.h>
#include <string.h>
int ee(char *ch,char c,int i,int j){
	int n=0; 
	for(int q=i;q<j;q++){
		if(ch[q]==c){
			n++;
			ch[q]='0';
		}
	}
	return n;
}
void swp(int *a,int i,int j){
	int tem=a[i];
	a[i]=a[j];
	a[j]=tem;
}
void pai(int *a,int m){
	for(int i=1;i<m;i++){
		for(int j=m-1;j>=i;j--){
			if(a[j]<a[j-1])
				swp(a,j,j-1);
		}
	}
}
int yes(int q){
	if (q==0)
		return 0;
	if(q==1)
		return 0;
	if(q==2)
		return 1;
	if(q==3)
		return 1;
	for(int i=2;i*i<=q;i++){
		if(q%i==0){
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int n;
	char ch[100];
	int a[100]={0};
	int l;
	int m;
	int i;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(ch);
		l=strlen(ch);
		for(i=0,m=0;i<l;i++){
			if(ch[i]!='0'){
				a[m++]=ee(ch,ch[i],i,l);
			}
		}
		pai(a,m);
		if(yes(a[m-1]-a[0])){
			printf("Lucky Word\n");
			printf("%d\n",a[m-1]-a[0]);
		}
		else{
			printf("No Answer\n");
			printf("0\n");
		}
	}
	return 0;
}        