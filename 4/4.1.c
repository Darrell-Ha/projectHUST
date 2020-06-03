#include <stdio.h>
int main() {
	int n,i,f=1;
	do{
		scanf("%d",&n);	
	}while(n<=0&&n>=8);
	for(i=1;i<=n;i++){
		f*=i;
	}
	printf("%d",f);
	return 0;
}