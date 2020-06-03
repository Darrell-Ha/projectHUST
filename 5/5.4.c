#include <stdio.h>
#include <string.h>

int main(){
	int i,n,j;
	char arr[100][50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %[^\n]%*c",arr[i]);
		j=0;
		while(arr[i][j]==' '||arr[i][j]!='\0'){
			if(arr[i][j]!=' '){
				j++;
			}else{
				if(arr[i][j+1]!=' ' && arr[i][j+1]!='\0'){
					j++;	
				}else{
					strcpy(&arr[i][j],&arr[i][j+1]);
				}
			}		
		}
		strupr(arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%s",arr[i]);printf(":%d\n",strlen(arr[i]));
	}
	
	return 0;
}