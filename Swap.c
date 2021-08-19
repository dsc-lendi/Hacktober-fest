#include <stdio.h>

#include <stdlib.h>

 

int main(int argc, char *argv[])

{

  int a,b;

  printf("Please enter two integer numbers to swap\n");

  scanf("%d%d",&a,&b);

  printf("before swapping\n");

  printf("a=%d\n",a); 

  printf("b=%d",b);   

  

    a=b+a;

    b=a-b;

    a=a-b;

    

  printf("\nafter swapping\n");

  printf("a=%d\n",a); 

  printf("b=%d",b); 

  getch();

  

}
