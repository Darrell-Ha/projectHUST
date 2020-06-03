#include <stdio.h>
#include <string.h>

int main(){
	int i,n,j;
	char arr[100][50];
	char swap[50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %[^\n]%*c",arr[i]);
		strlwr(arr[i]);
		j=0;
		while(arr[i][j]==' '||arr[i][j]!='\0'){
			if(arr[i][j]!=' '){
				j++;
			}else{
				if(arr[i][j+1]!=' ' && arr[i][j+1]!='\0'){
					j++;
					arr[i][j]-=32;	
				}else{
					strcpy(&arr[i][j],&arr[i][j+1]);
				}
			}		
		}
		arr[i][0]-=32;
	}
	for(i=0;i<n-1;i++){
		int k=i;
		for(j=i+1;j<n;j++){
			if(strcmp(arr[k],arr[j])>0){
				k=j;
			}
		}
		if(k!=i){
			strcpy(swap,arr[k]);
			strcpy(arr[k],arr[i]);
			strcpy(arr[i],swap);
		}
		
	}
	for(i=0;i<n;i++){
		printf("(%d)%s\n",i+1,arr[i]);
	}
	
	return 0;
}