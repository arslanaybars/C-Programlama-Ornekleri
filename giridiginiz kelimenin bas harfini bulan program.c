/*Aybars Arslan */
/*giridiginiz kelimenin bas harfini bulan program*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kelime[100];
    int i=0;

    printf("kelimeyi giriniz : ");
    gets(kelime);

    while(kelime[i]>=97 && kelime[i]<=122)
    {
    kelime[i]-=32;
    printf("%c",kelime[i]);
    }

    fflush(stdin);
    getchar();
    return 0;
}
