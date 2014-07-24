/*Unsigned sayıyı binary(ikili) sistemde yazan ve ekranda gösteren program..*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void bitlerigor(unsigned deger);

int main(void)
{
    unsigned x;
    char kr;
do{
    system("cls");//programdan yeni deger isteyince eski bilgileri siler.
    printf("Bir sayi giriniz :");
    scanf("%u",&x);

    bitlerigor(x);
            puts("\n\nProgrami bitirmek icin 'h' devam etmek icin 'y' harfine basiniz..");
            kr=getch();
            }while(kr!='h' && kr!='H');

            puts("\n\n\n-----cikmak icin enter'a basiniz-----\n");

    return 0;
}

void bitlerigor(unsigned deger)
{
    unsigned c;

    unsigned gorsakla = 1 << 31;

    printf("%10u = ",deger);

    for(c=1;c<=32;c++){
    putchar(deger & gorsakla ? '1' : '0');
    deger <<=1;

        if (c%8==0)
        {
            putchar(' ');

        }

    }

putchar('\n');
}
