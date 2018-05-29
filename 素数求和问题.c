#include <stdio.h>
int s(int n){
	if(n==1)
		return 0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int a[10000];
	int n;
	int k;
	int sum;
	scanf("%d",&n);
	while(n--){
		sum=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<k;i++){
			if(s(a[i]))
				sum+=a[i];
		}
		printf("%d\n",sum);
	}
}        