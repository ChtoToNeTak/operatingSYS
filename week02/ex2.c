#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	int l;
	printf("Enter string: \n");
	scanf("%s", a);
	l=strlen(a);
	for(int i=l-1; i>=0; i--){
		putchar(a[i]);
	}
	return 0;
}
