 
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
			printf("%d\n",2);
			continue;
		}
		if(s(a)){
			printf("%d\n",a);
		}
		else{
			li=l(a);
			ri=r(a);
			if(ri-a<a-li)
				printf("%d\n",ri);
			else if(ri-a>a-li)
				printf("%d\n",li);
			else
				printf("%d\n",ri);
		}
	}
	return 0;
}        