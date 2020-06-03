#include <stdio.h>
int main(){
    int arr[100];
	int n,i,count1=0;
	float sumpos=0,sumneg=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			sumneg+=arr[i];
			count1++;
		}else if(arr[i]>0){
			sumpos+=arr[i];
		}
	}
	printf("%f ",(count1==0)?0:(sumneg/count1));
	printf("%f",sumpos);
	
	
	
	return 0;
}