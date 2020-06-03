#include <stdio.h>
int main() {
	int n,s,f=0;
	do{
		scanf("%d",&n);
	}while(n<=0 && n>1000);
	while(n!=0){
		s=n%10;
		f+=s;
		n/=10;
	}
	printf("%d",f);
    return 0;

}