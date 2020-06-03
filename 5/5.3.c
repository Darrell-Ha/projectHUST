#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main ()
{
  char x[1000];
  int n,i;
  fflush(stdin);
  gets(x);
  n= strlen(x);
while (x[0]==' ')
{
strcpy(&x[0],&x[1]);
}
while (x[strlen(x)-1]==' ')
strcpy(&x[strlen(x)-1],&x[strlen(x)]);
 
for(i=0; i<strlen(x) ;i++)
if ((x[i]==' ')&&(x[i+1]==' '))
{
strcpy(&x[i],&x[i+1]);
 
i--;
}
strupr(x); n= strlen(x);
  printf("%s",x); printf(":%d", n);
}