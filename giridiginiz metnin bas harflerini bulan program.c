/*Aybars Arslan*/
/*giridiginiz metnin bas harflerini bulan program*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kelime[100];
    int i=0;

    printf("kelimeyi giriniz : ");
    gets(kelime);

    printf("%c",kelime[0]);
    for(i=0;i<=strlen(kelime);i++)
    {
        if(kelime[i]==' ')
        printf("\n%c",kelime[i+1]);
    }

    fflush(stdin);
    getchar();
    return 0;
}
