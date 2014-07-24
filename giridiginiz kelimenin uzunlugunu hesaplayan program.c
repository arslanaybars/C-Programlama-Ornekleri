/*Aybars Arslan*/
/*giridiginiz kelimenin uzunlugunu hesaplayan program*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0;
    char kelime[20];

    printf("Kelime giriniz :");
    scanf("%s",&kelime);

    while(kelime[i]!='\0')
    i++;

    printf("Kelimenin uzunlugu : %d harften olusmustur...",i);

    fflush(stdin);
    getchar();
    return 0;
}


