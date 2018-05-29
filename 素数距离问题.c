#include <stdio.h>
int s(int n){
	int i;
	if(n==1)
		return 0;
	else{
		for(i=2;i*i<=n;i++){
			if(n%i==0)
				return 0;
		}
	}
	return 1;
}
int l(int n){
	int i;
	for(i=n-1;i>=2;i--){
		if(s(i))
			break;
	}
	return i;
}
int r(int n){
	int i;
	for(i=n+1;;i++){
		if(s(i))
			break;
	}
	return i;
}
int main()
{
	int a;
	int li;
	int ri;
	int k;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&a);
		if(a==1){
			printf("%d %d\n",2,1);
			continue;
		}
		if(s(a)){
			printf("%d %d\n",a,0);
		}
		else{
			li=l(a);
			ri=r(a);
			if(ri-a<a-li)
				printf("%d %d\n",ri,ri-a);
			else if(ri-a>a-li)
				printf("%d %d\n",li,a-li);
			else
				printf("%d %d\n",li,a-li);
		}
	}
	return 0;
}