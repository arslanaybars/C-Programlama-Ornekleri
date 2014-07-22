#include <stdio.h>   //header tanimlamalari..
#include <stdlib.h>

  /*Aybars ARSLAN girilen n tane sayinin teklerini ve ciftlerini toplayan program.*/

   int main()
   {
    int sayi,toptek=0,topcift=0;

    do
    {
    system("CLS");
    printf("Cift sayilarin toplami = %d",topcift);
    printf("Tek sayilarin toplami = %d",toptek);

    printf("cikis icin 00 sayilarini giriniz...   ");

    printf("Bir sayi giriniz :");
    scanf("%d",&sayi);

    if (sayi%2 == 0) topcift += sayi;
    if (sayi%2 == 1) toptek += sayi;

    }while(sayi != 00);

    printf ("sonlandi , ");
    printf("Cift sayilarin toplami = %d",topcift);
    printf("Tek sayilarin toplami = %d",toptek);

      printf("icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
