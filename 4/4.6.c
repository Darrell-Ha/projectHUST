#include <stdio.h>
#include <math.h>
int main() {
	int n,i;
	float x,s1,s2,s3=1,nhan=1;
	do{
		scanf("%d",&n);
	}while(n<=0);
	scanf("%f",&x);
	s1=(pow(x,n+1)-1)/(x-1);
	s2=(pow(-x,n+1)-1)/(-x-1);
	for(i=1;i<=n;i++){
		nhan*=x/i;
		s3+=nhan;
	}
	printf("%f",s1);
	printf("\n%f",s2);
	printf("\n%f",s3);
	
 
	return 0;
}