#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "locale.h"

int main(void)
{

   int m,n;
   setlocale(LC_CTYPE, "RUSSIAN");
   printf("\n");
   printf("\n������� ������ �����:\n");
   scanf("%i",&m);

   printf("\n");
   printf("\n������� ������ �����:\n");
   scanf("%i",&n);

   printf("\n");
   printf("\n��� = %i", fun(m,n));
   printf("\n");

   return 0;

}

fun(int n, int m) {

int i =0;
      if (m<n)
        {
      i = n;
    }
    else {
      i = m;

    }
    for (i < m*n ; i > 0; i++)
        if (i % m == 0 && i % n == 0)
   return i;
}


