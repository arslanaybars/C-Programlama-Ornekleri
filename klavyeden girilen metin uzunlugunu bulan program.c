#include <stdio.h>   //header tanimlamalari..
#include <stdlib.h>

  /*Aybars ARSLAN klavyeden girilen metin uzunlugunu bulan program.*/

   int main()
   {
    char dizi[100];
    int uzunluk = 0,bosluk= 0,i,j;

    puts("Bir Metin Giriniz (Ornek : Merhaba Dunya) : ");
    gets(dizi);

    for(i=0;dizi[i]!='';i++)
    {
        uzunluk++;
    }

    for (j=0;dizi[j];j++)
    {
        if(dizi[j]==' ')
            bosluk++;
    }


      printf ("uzunlugu : %d'dir.",uzunluk);

      printf("icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
