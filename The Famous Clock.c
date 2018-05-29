#include <stdio.h>
#include <string.h>
int p(char *ch){
	if(strcmp(ch,"I")==0)
		return 1;
	if(strcmp(ch,"II")==0)
		return 2;
	if(strcmp(ch,"III")==0)
		return 3;
	if(strcmp(ch,"IV")==0)
		return 4;
	if(strcmp(ch,"V")==0)
		return 5;
	if(strcmp(ch,"VI")==0)
		return 6;
	if(strcmp(ch,"VII")==0)
		return 7;
	if(strcmp(ch,"VIII")==0)
		return 8;
	if(strcmp(ch,"IX")==0)
		return 9;
	if(strcmp(ch,"X")==0)
		return 10;
	if(strcmp(ch,"XI")==0)
		return 11;
	if(strcmp(ch,"XII")==0)
		return 12;
}
int main(int argc, char const *argv[])
{
	char ch[5];
	int n=1;
	while(gets(ch)!=NULL){
		printf("Case %d: %d\n",n++,p(ch));
	}
	return 0;
}