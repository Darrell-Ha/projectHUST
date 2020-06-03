#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			if(c==0){
				printf("%f",0);
			}else{
				printf("%f",(-c)/b);
			}
		}
	}else{
		float delta=b*b-4*a*c;
		if(delta<0){
			float d=(-b*b+4*c)/(4*a);
			float c=-b/(2*a);
			d=sqrt(d);
			printf("%f+%fi",c,d);
			printf("\n%f-%fi",c,d);
		}else if(delta==0){
			printf("%f",-b/(2*a));
		}else{
			printf("%f",(-b+sqrt(delta))/(2*a));
			printf("\n%f",(-b-sqrt(delta))/(2*a));	
		}
	}

	return 0;
}