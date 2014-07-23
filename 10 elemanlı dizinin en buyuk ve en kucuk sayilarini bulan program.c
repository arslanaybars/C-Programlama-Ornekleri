#include <stdio.h>
#include <stdlib.h>

/*Aybars ARSLAN Bilgisayar Mühendisliği İngilizce 2.öğretim*/
/*10 elemanlı dizi tanımlayın bu 10 elemanlı dizinin en büyük ve en kucuk sayilari veren program*/

int main()
{
    int i,eb,ek;
    int sayi[10]={13,43,214,45,56,627,78,839,10,190};

    eb = sayi[0];
    ek = sayi[0];

    printf("Girilen sayilar : 103,43,214,45,56,627,78,839,10,190");

    for(i=0;i<10;i++)
       {
       if (sayi[i]<ek)
       ek=sayi[i];
       }
        printf("\n\nEn kucuk sayi = %d",ek);

    for(i=0;i<10;i++)
        {
          if (sayi[i]>eb)
          eb=sayi[i];
        }
        printf("\nEn buyuk sayi = %d\n",eb);


    printf("\nCikmak icin enter tusuna basiniz.");
    fflush(stdin);
    getchar();
    return 0;
}

