 #include <stdio.h>
int main()
{
	int a[1000]={1,1};
	int n;
	int k;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		if(n==1 || n==2)
			printf("%d\n",1);
		else{
			for(int i=2;i<n;i++)
				a[i]=a[i-1]+a[i-2];
			printf("%d\n",a[n-1]);
		}
	}
}