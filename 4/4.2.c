#include <stdio.h>
#include <math.h>
int main() {
	int i, dem=0, n;
    scanf("%d",&n);
    if(n<=1){
    	printf("Khong phai so nguyen to");
    	return 0;
	}
    for(i=2;i<=sqrt(n);i++){
        if(n % i==0){
            dem=dem+1;
        }
    }
    if(dem==0){
        printf("La so nguyen to");
    }else{
        printf("Khong phai so nguyen to");
    }
    return 0;

}