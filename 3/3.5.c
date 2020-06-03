#include <stdio.h>
int main() {
	double x,y,f;
	scanf("%lf",&x);
	scanf("%lf",&y);
	f=x*x+y*y;
	printf("%f",f);
	printf("\n%f",f+2*x*y);
	printf("\n%f",f-2*x*y);

	return 0;
}