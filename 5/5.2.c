#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char arr[1000];
	scanf(" %[^\n]%*c",arr);
	i=0;
	while(arr[i]==' '||arr[i]!='\0'){
		if(arr[i]!=' '){
			i++;
		}else{
			if(arr[i+1]!=' ' && arr[i+1]!='\0'){
				i++;	
			}else{
				strcpy(&arr[i],&arr[i+1]);
			}
		}		
	}
	strupr(arr);
	printf("%s",arr);printf(":%d\n",strlen(arr));
	
	return 0;
}