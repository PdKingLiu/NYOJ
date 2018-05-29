 
#include <string.h>
#include <stdio.h>
int main(void)
{
	char ch[100];
	int n;
	int l;
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(ch);
		l=strlen(ch);
		for(int i=l-1;i>=0;i--){
			switch(ch[i])
			{
				case '0':printf("O");break;
				case '1':printf("O");break;
				case '2':printf("T");break;
				case '3':printf("T");break;
				case '4':printf("F");break;
				case '5':printf("F");break;
				case '6':printf("S");break;
				case '7':printf("S");break;
				case '8':printf("E");break;
				case '9':printf("N");break;
			}

		}
		printf("\n");
	}
	return 0;
}        