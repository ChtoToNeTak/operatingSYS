#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int a = INT_MAX;
	float b = FLT_MAX;
	double c = DBL_MAX;
	printf("Maximum value of int: %d\n", a);
	printf("Size of maximum int: %d\n", sizeof(a));
	printf("Maximum value of float: %f\n", b);
	printf("Size of maximum float: %d\n", sizeof(b));
	printf("Maximum value of double: %f\n", c);
	printf("Size of maximum double: %d", sizeof(c));
	return 0;
}
