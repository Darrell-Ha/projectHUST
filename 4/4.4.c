#include <stdio.h>
int main() {
	int x,y,swap,u,a,b;
	do{
		scanf("%d",&x);
		scanf("%d",&y);
	}while(x<=0&&y<=0);
	a=x;b=y;
	while(y!=0){
		swap=y;
		y=x%y;
		x=swap;
	}
	u=x;
	printf("%d",u);
	printf("\n%d",a*b/u);
    return 0;
 
}