#include <stdio.h>
#include <stdlib.h>

/*Aybars ARSLAN Bilgisayar Mühendisliği İngilizce 2.öğretim*/
/*10 elemanlı dizi tanımlayın bu 10 elemanlı dizinin en büyük ve en kucuk sayilari veren program*/

int main(void)
{
    int i,gecici,tut;
    int sayi[10]={12,213,334,425,563,67,78,839,11,10};


    printf("Elimizdeki sayilar : 12,213,334,425,563,67,78,839,11,10");

    for(gecici=1;gecici<10;gecici++)
       {
           for (i=0;i<10 - 1;i++)
          {
           if (sayi[i]>sayi[i+1])
           {
               tut=sayi[i];
               sayi[i]=sayi[i+1];
               sayi[i+1]=tut;
           }
          }
       }

    printf("\n\nKucukten buyuge siralamasi :");

      for (i=0;i<10;i++)
      {
          printf("\n%d\t",sayi[i]);
      }


    printf("\n\nCikmak icin enter tusuna basiniz.");
    fflush(stdin);
    getchar();
    return 0;
}

