#include <stdio.h>

int main(){
	char a[100];
	int n;
	int l,r;
	printf("Enter a number: \n");
	scanf("%d", &n);
	l=n;
	r=n;
	for(int i=0;i<2*n;i++){
		a[i]=' ';
	}
	for(int i=0; i<n; i++){
		a[l]='*';
		a[r]='*';
		l--;
		r++;
		for(int j=0;j<2*n;j++){
			putchar(a[j]);
		}
		if (i<n-1) {
			printf("\n");
		}
	}
	return 0;
}
