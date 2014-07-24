/*Aybars Arslan*/
/*giridiginiz kelimenin tersini yazan program*/

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

    while (i>0)
    {
        i--;
        printf("\n%c",kelime[i]);
    }

    fflush(stdin);
    getchar();
    return 0;
}
