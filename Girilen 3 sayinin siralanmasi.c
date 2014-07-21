#include <stdio.h>   //header tanimlamalari..
#include <stdlib.h>

  /*Aybars ARSLAN Sayilari Siralama Proje Odevi*/

  int main()
  {
      int a,b,c,eb,ek,mm; /*Degiskenlerimiz eb=en buyuk,ek=en kucuk*/

          do/*do while dongusu kurdum ve programin devam etmesini sagladim*/
    {
      printf("sayi giriniz : ");
      scanf ("%d%d%d",&a,&b,&c); /* uc sayinin tek satirdan okunmasi*/

  if (a != b && b != c && a!=c ){/*sayilar birbirinden farkli ise donguye gir*/

      if (a<b && c<b){
          if (c<a){
              eb = b;
              mm = a;
              ek = c;
          }else
          {
              eb = b;
              mm = c;
              ek = a;
          }
      }
      if (a<c && b<c){
          if (a<b){
              eb = c;
              mm = b;
              ek = a;
          }else
          {
              eb = c;
              mm = a;
              ek = b;
          }
      }
      if (b<a && c<a){
          if (c<b){
              eb = a;
              mm = b;
              ek = c;
          }else
          {
              eb = a;
              mm = c;
              ek = b;
          }
      }

       printf ("%d < %d < %d",ek,mm,eb);/*hesaplanan degerlerin yazdirilmasi*/
   }
   else printf ("farkli sayilar giriniz ...");

     puts("Bitirmek icin Y,Devam etmek icin N harfine basiniz");

    }while(getchar() == 'N' || getchar() == 'n');


      printf("sonlandirmak icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
  }
