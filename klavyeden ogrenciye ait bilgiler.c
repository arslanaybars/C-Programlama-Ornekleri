#include <stdio.h>   //header tanimlamalari..
#include <stdlib.h>

  /*Aybars ARSLAN klavyeden bir Ã¶ÄŸrenciye ait bilgileri gosteren program*/

   int main()
   {
    char isim[40];
    char numara[20];
    char dersad[20];
    int vize , final;
    float ort;

    do
    {
    fflush(stdin);
    system("CLS");

    puts("Dersin adi  :");
    gets(dersad);

    puts("Isim  :");
    gets(isim);

    puts("numara:");
    gets(numara);

    puts("Vize :");
    scanf("%d",&vize);

    puts("Final :");
    scanf("%d",&final);

    ort = ((vize*40)/100) + ((final*60)/100);

    system("CLS");/*Yukariyi temizleyip  sonra sonuclari yazdirdim*/

    printf("Dersin adi    : %s",dersad);
    printf("Isim    : %s",isim);
    printf("Numara  : %s",numara);
    printf("Vize sonucu : %d",vize);
    printf("Final sonucu   : %d",final );
    printf("Ortalama    : %.3f",ort);


    puts("Bitirmek icin Y,Devam etmek icin N harfine basiniz");

    }while(getchar() == 'N' || getchar() == 'n');

      printf("sonlandirmak icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
