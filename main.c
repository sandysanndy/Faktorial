#include <stdio.h>
#include <stdlib.h>

int faktorial(int n)
{
   if (n==0){
      return 1;
   }else{
      return n * faktorial(n-1);
   }
}

int main(int argc, char *argv[])
{ int n,i;
  printf("Masukkan angka faktorial = ");
  scanf("%i", &n);
  i = faktorial(n);
  printf("Jumlah dari faktorial %i = %i \n", n, i);
  system("PAUSE");	
  return 0;
}
