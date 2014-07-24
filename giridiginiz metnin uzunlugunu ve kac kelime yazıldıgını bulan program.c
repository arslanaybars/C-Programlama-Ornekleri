/*Aybars Arslan*/
/*giridiginiz metnin uzunlugunu ve kac kelime yazıldıgını bulan program*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,sayac=0;
    char kelime[100];

    printf("Metin giriniz :");
    gets(kelime);

    while(kelime[i]!='\0')
    i++;
    printf("\nMetnin uzunlugu : %d",i);


    while (i>=0)
    {
    if(kelime[i]==' ')
    sayac++;
    i--;
    }

    printf("\n\n%d kelime kullanilmistir.",sayac+1);

    fflush(stdin);
    getchar();
    return 0;
}
