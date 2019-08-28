#include <stdio.h>
void swap(int *a, int *b);
int main(){
	int a,b;
	printf("Give me 2 integers: \n");
	scanf("%d %d", &a,&b);
	printf("%d %d\n", a,b);
	swap(&a,&b);
	printf("%d %d", a,b);
	return 0;
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}