#include <stdio.h>   //header tanimlamalari..
#include <stdlib.h>

  /*Aybars ARSLAN 1den 100e kadar sayilarin toplamini veren program*/

   int main()
   {
       int i,toplam=0;
       for (i=1;i<=100;i++)/*For dongusu ile sayilari birer birer 100e kadar arttiriyoruz..*/

       {
           toplam += i;
       }

      printf("1'den 100'e kadar olan sayilarin toplami = %d'dir..",toplam);


      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
