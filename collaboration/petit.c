#include <stdio.h>
#include <math.h>
int main()
int A,B,C;
printf("Entrer A,B:");
scanf("%d",&A);
scanf("%d",&B);
if (A<B)
{
  C=A;
  A=B;
  B=C;
}
printf("le plus grand nombre est%d\n",B);
return 0;
}
